//diferenca entra var e let
/*
let nome = `nahuel`;
let nome = `yago`;
console.log(nome);
(vai gerar erro)
var nome = `nahuel`;
var nome = `yago`;
console.log(nome);
(yago ira sobrescrever nahuel)
*/
// dados primitivos String, number, undefined, null, boolean, symbol
const nome = 'Nahuel'; //string
const nome1 = "Nahuel"; //string
const nome2 = `Nahuel`; //string
const num1 = 10; // number
const num2 = 10.52; //number
let nomeAluno; // undefined -> nao aponta pra local nenhum na memoria
let sobrenomeAluno = null; // Nulo -> nao aponta pra local nenhum na memoria
const aprovado = false; //Boolean = true, false (lógico)

let a = [1, 2];
let b = a;

console.log(a, b); //2, 2

b.push(3);
console.log(a, b); //3, 2