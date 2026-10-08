const state = document.getElementById('state');
const containers = document.getElementById('containers');

function render(data) {
  state.textContent = JSON.stringify(data, null, 2);
  containers.replaceChildren();
  for (const item of (data.containers || [])) {
    const el = document.createElement('div');
    el.textContent = item.name;
    containers.appendChild(el);
  }
}

document.getElementById('refresh').addEventListener('click', () => {
  render({ containers: [{ id: 1, name: 'Default', color: 0 }] });
});
document.getElementById('create').addEventListener('click', () => {
  render({ action: 'create-container', status: 'pending' });
});
render({ containers: [] });
