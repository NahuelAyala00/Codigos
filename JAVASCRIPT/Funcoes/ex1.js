// Crie uma função para verificar se um valor é Truthy
function verificarTrue(valor) {
    return console.log(!!valor);
}
verificarTrue(10);
// Crie uma função matemática que retorne o perímetro de um quadrado
// lembrando: perímetro é a soma dos quatro lados do quadrado
function perimetroQuadrado(lado) {
    var perimetro = lado + lado + lado + lado
    console.log(`O perimetro do quadrado é de ${perimetro}`)
}
perimetroQuadrado(4);
// Crie uma função que retorne o seu nome completo
// ela deve possuir os parâmetros: nome e sobrenome
function nomeCompleto(nome, sobrenome) {
    var nome;
    var sobrenome;
    console.log(`Nome completo é ${nome} ${sobrenome}`)
}
nomeCompleto(`Nahuel`, `Ayala`);
// Crie uma função que verifica se um número é par
function vertificarPar(numero) {
    if (numero % 2 == 0) {
        return console.log(`É par`)
    } else {
        return console.log(`É impar`)
    }
}
vertificarPar(2);
// Crie uma função que retorne o tipo de
// dado do argumento passado nela (typeof)
function tipoDado(dado) {
    return console.log(typeof dado);
}
tipoDado(5);
// addEventListener é uma função nativa do JavaScript
// o primeiro parâmetro é o evento que ocorre e o segundo o Callback
// utilize essa função para mostrar no console o seu nome completo
// quando o evento 'click' ocorrer.

addEventListener('click', function() {
    console.log('Nahuel Ayala')
})

// Corrija o erro abaixo
function precisoVisitar(paisesVisitados) {
    var totalPaises = 193;
    return console.log(`Ainda faltam ${totalPaises - paisesVisitados} países para visitar`);
}
precisoVisitar(20);

function jaVisitei(paisesVisitados) {
    var totalPaises = 193;
    return console.log(`Já visitei ${paisesVisitados} do total de ${totalPaises} países`);
}

jaVisitei(20);