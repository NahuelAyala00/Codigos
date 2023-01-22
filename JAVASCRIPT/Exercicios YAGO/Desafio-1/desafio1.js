//Criar um script de um relógio (Data e hora)
const yapo = document.getElementById('yapo')
const min = new Date().getMinutes();
const sec = new Date().getSeconds();
const horas = new Date().getHours();

function relogio() {
    const min = new Date().getMinutes();
    const sec = new Date().getSeconds();
    const horas = new Date().getHours();
    var relogio = `${horas}:${min}:${sec}`;
    yapo.innerText = relogio
}

setInterval(relogio, 1000);