# Chromium 124 integration points

CPC stays isolated under `//cpc/` wherever possible.

## BrowserContext / Profile
Create the profile-owned CPC service from BrowserContext/Profile lifecycle. Each profile owns its container registry and active container state.

## StoragePartition
Map `container_<id>` to `<profile>/Containers/<id>/` and create a per-container StoragePartition/NetworkContext. The CPC mapper only exposes stable keys; the Chromium-side StoragePartition integration remains required.

## Navigation
Attach a container-aware NavigationThrottle and choose the target container before navigation commits.

## Views
Add `CpcSidebarView` to the browser window and `CpcContainerIndicatorView` near the omnibox identity area.

## WebUI
Register `chrome://cpc-settings` and serve the files under `cpc/ui/webui/resources/`.

## Mojo
Build `//cpc/mojo:cpc_mojo` and bind the browser implementation from the profile-owned CPC service.

## Security
Do not treat the included crypto helpers as production cryptography. Production lock/export must use authenticated encryption, secure key derivation, OS-backed secret storage, and platform biometric APIs.
