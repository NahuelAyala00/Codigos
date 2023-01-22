// Qual o resultado da seguinte expressão?
var total = 10 + 5 * 2 / 2 + 20;
console.log(total);
var respostaTotal = 35;
// Crie duas expressões que retornem NaN
var notNumber1 = 'Yago' / 5;
console.log(isNaN(notNumber1))
var notNumber2 = 'Nahuel ' + 5;
console.log(isNaN(notNumber2))
    // Somar a string '200' com o número 50 e retornar 250
var somar = '200'
console.log(+somar + 50);
// Incremente o número 5 e retorne o seu valor incrementado
var numero5 = 5;
numero5++;
console.log(numero5);
// Como dividir o peso por 2?
var numero = +'80' / 2;
var unidade = 'kg';
var peso = numero + unidade; // '80kg'
var pesoPorDois = peso; // NaN (Not a Number)

console.log(pesoPorDois);