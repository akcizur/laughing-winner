# CPC sync reference server

Minimal HTTPS-facing storage server seam. The production deployment should place TLS and authentication in front of the storage endpoint and treat uploaded blobs as opaque encrypted data.

The server is intentionally tiny so the browser client can target WebDAV/S3/custom REST implementations later.
