# laughing-winner

## Third Person Controller Web App

The repository now includes the imported `as-main.zip` application as the runnable Vite + React 19 + Three.js project at the repository root.

### App

- React 19
- Vite
- Three.js / WebGL 2
- Tailwind CSS v4 via `@tailwindcss/vite`
- Keyboard/mouse, touch and Gamepad API input
- Mixamo GLB character asset
- OBB/capsule physics
- camera spring-arm and trauma shake
- spatial mini-map
- controller inspector
- localStorage configuration persistence
- procedural Web Audio effects

### Commands

```bash
npm install
npm run dev
npm run lint
npm run build
npm run preview
```

The application listens on port 3000 during development.

### Assets

`public/assets/` contains the imported Mixamo model and grid textures from the supplied `as-main.zip`.

### CPC source

The earlier Containers Privacy Chromium scaffold is still retained under `cpc/`, `docs/`, and `sync/`. It is a separate Chromium 124.x overlay and is not required by the React application.

## Source import

Imported from the supplied `as-main.zip` archive on 2026-10-08.
