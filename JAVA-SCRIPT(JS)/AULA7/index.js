// constantes
//Nao podemos criar constantes com palavras reservadas

// Variaveis precisam ter nomes significativos
// nao pode comecar o nome de uma constante com um numero

// nao pode conter espacos ou tracos

// utilizamos camelcase
// let nomeComplenteDoCliente = `Nahuel`
// case-sensitive

// nao podemos redeclarar a constante com const
// NAO UTILIZE VAR, UTILIZE const

const nome = `joão`;
const primeiroNumero = 5;
const segundoNumero = 10;
const resultado = primeiroNumero * segundoNumero;
const resultadoDuplicado = resultado * 2;
let resultadTriplicado = resultado * 3;
resultadTriplicado = resultadTriplicado + 5;

console.log(resultado);

console.log(typeof primeiroNumero + segundoNumero); // garante que é um numero