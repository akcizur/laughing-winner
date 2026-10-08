package main

import (
	"fmt"
	"io"
	"net/http"
	"os"
	"path/filepath"
)

func main() {
	root := "./data"
	if err := os.MkdirAll(root, 0700); err != nil {
		panic(err)
	}

	http.HandleFunc("/blob/", func(w http.ResponseWriter, r *http.Request) {
		id := filepath.Base(r.URL.Path)
		path := filepath.Join(root, id)

		switch r.Method {
		case http.MethodPut:
			f, err := os.OpenFile(path, os.O_CREATE|os.O_TRUNC|os.O_WRONLY, 0600)
			if err != nil {
				http.Error(w, "storage error", http.StatusInternalServerError)
				return
			}
			defer f.Close()
			if _, err := io.Copy(f, io.LimitReader(r.Body, 64<<20)); err != nil {
				http.Error(w, "write error", http.StatusBadRequest)
				return
			}
			w.WriteHeader(http.StatusNoContent)
		case http.MethodGet:
			http.ServeFile(w, r, path)
		default:
			w.Header().Set("Allow", "GET, PUT")
			w.WriteHeader(http.StatusMethodNotAllowed)
		}
	})

	fmt.Println("CPC sync reference server listening on 127.0.0.1:8787")
	if err := http.ListenAndServe("127.0.0.1:8787", nil); err != nil {
		panic(err)
	}
}
