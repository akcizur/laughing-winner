# CPC source overlay specification

## Baseline
Chromium 124.x
C++17
GN + Ninja
Clang 16+

## Required modules

- container lifecycle
- profile-owned registry
- container-specific storage key/path mapping
- navigation rule matching
- permission store
- workspaces
- Mojo IPC
- WebUI settings
- native Views sidebar/indicator
- optional automation and sync seams

## Non-goals of this repository

This repository does not vendor Chromium source itself and does not claim a complete browser build. The Chromium-side changes to BrowserContext, StoragePartition, BrowserView, WebUI controller registration, and extension plumbing remain intentionally thin integration points.

## Security gate

No lock/sync scaffold is considered production secure until authenticated encryption, secure key derivation, key storage, and platform biometric flows are implemented and reviewed.
