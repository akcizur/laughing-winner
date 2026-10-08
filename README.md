# Containers Privacy Chromium (CPC)

CPC is a Chromium 124.x source overlay for isolated Multi-Account Containers.

This repository contains the CPC-side source tree under `//cpc/`. It is intentionally not a complete Chromium checkout. Apply the overlay to a Chromium 124.x checkout and connect the thin Chromium-side hooks described in `docs/chromium-124-integration.md`.

## Included

- container lifecycle and metadata
- container storage partition naming/path mapping
- domain-rule navigation seam
- per-container permission store
- workspace model
- Mojo interfaces
- native Views sidebar / indicator skeleton
- `chrome://cpc-settings` WebUI skeleton
- localhost automation socket seam
- extension API seam
- lock/sync interfaces
- reference Go sync server

## Target

Chromium 124.x, C++17, GN/Ninja, Clang 16+.

## Important

This is an integration scaffold. The lock/sync crypto files are not a production security implementation. Connect them to Chromium/BoringSSL and platform credential APIs before shipping.

## Overlay

Copy this repository over a Chromium checkout, then resolve the Chromium-side integration points in `docs/chromium-124-integration.md`.

A helper is included at `tools/apply_cpc_overlay.py`.
