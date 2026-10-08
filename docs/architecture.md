# CPC architecture

CPC is deliberately split into isolated modules under `//cpc/`.

```
Profile
  └─ CpcBrowserContextManager
       ├─ ContainerRegistry
       ├─ PermissionStore
       ├─ WorkspaceManager
       └─ Lock/Sync policy
              │
Navigation ───┼── Storage partition mapping
              │
WebUI / Views ── Mojo ── browser service
```

## Container identity

A positive int64 container id is stable within a profile. The canonical storage partition name is `container_<id>`; the relative data directory is `Containers/<id>/`.

## Rules

Navigation rules map a URL pattern to a container id. The matcher remains a small deterministic component so that the Chromium NavigationThrottle integration can stay thin.

## UI

The native layer owns the sidebar and active-container indicator. `chrome://cpc-settings` is a WebUI surface for management and diagnostics.

## Security

Container locking is an orchestration boundary. Actual encryption, key derivation, biometric authorization, and platform secure storage must be wired to Chromium/BoringSSL and OS APIs in the host Chromium tree.
