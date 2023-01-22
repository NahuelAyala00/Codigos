function areaQuadrado(lado) {
    return lado * lado;
}

areaQuadrado(4) // 16
areaQuadrado(5) // 25
areaQuadrado(2) // 4

function pi() {
    return 3.14;
}

var total = 5 * pi(); // 15.7

// peso e altura são os parâmetros
function imc(peso, altura) {
    const imc = peso / (altura ** 2);
    return imc;
}

imc(80, 1.80) // 80 e 1.80 são os argumentos
imc(60, 1.70) // 60 e 1.70 são os argumentos

function corFavorita(cor) {
    if (cor === 'azul') {
        return 'Você gosta do céu';
    } else if (cor === 'verde') {
        return 'Você gosta de mato';
    } else {
        return 'Você não gosta de nada';
    }
}
corFavorita(); // retorna 'Você não gosta de nada'

addEventListener('click', function() {
    console.log('Clicou');
});
// A função possui dois argumentos
// Primeiro é a string 'click'
// Segundo é uma função anônima

function terceiraIdade(idade) {
    while (idade !== 'number') {
        console.log("Informe um numero valido!")
        if (idade >= 60) {
            return console.log("Idoso");
        } else {
            return console.log("Jovem");
        }
    }
}

function precisoVisitar(paisesVisitados) {
    var totalPaises = 193;
    return `Ainda faltam ${totalPaises - paisesVisitados} paises para visitar`
}
console.log(totalPaises); // erro, totalPaises não definido

var profissao = 'Designer';

function dados() {
    var nome = 'André';
    var idade = 28;

    function outrosDados() {
        var endereco = 'Rio de Janeiro';
        var idade = 29;
        return `${nome}, ${idade}, ${endereco}, ${profissao}`;
    }
    return outrosDados();
}

dados(); // Retorna 'André, 29, Rio de Janeiro, Designer'
outrosDados(); // retorna um erro

imc(80, 1.80); // imc aparece no console

function imc(peso, altura) {
    const imc = peso / (altura ** 2);
    console.log(imc);
}