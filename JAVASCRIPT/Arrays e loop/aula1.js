var videoGames = ['Switch', 'PS4', 'XBox'];

videoGames[0] // Switch
videoGames[2] // Xbox

var videoGames = ['Switch', 'PS4', 'XBox'];

videoGames.pop(); // Remove o último item e retorna ele
videoGames.push('3DS'); // Adiciona ao final da array
videoGames.length; // 3

for (var numero = 0; numero < 10; numero++) {
    console.log(numero);
}
// Retorna de 0 a 9 no console

var videoGames = ['Switch', 'PS4', 'XBox', '3DS'];
for (var i = 0; i < videoGames.length; i++) {
    console.log(videoGames[i]);
}

var videoGames = ['Switch', 'PS4', 'XBox', '3DS'];
for (var i = 0; i < videoGames.length; i++) {
    console.log(videoGames[i]);
    if (videoGames[i] === 'PS4') {
        break;
    }
}

var videoGames = ['Switch', 'PS4', 'XBox', '3DS'];
videoGames.forEach(function(item, index) {
    console.log(item, index); //indexn nao é obrigatorio
});
// O argumento item será atribuído dinamicamente

var numero = 0;
var maximo = 50;
for (; numero < maximo;) {
    console.log(numero);
    numero++;
}

var nome1 = "Yapo";
console.log(nome1);