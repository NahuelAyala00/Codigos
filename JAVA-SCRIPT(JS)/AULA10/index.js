/* Aritiméticos
+ Adiçao / Concatenacao
** Potenciaçao
% Resto da divisao
Incremento = ++
Decremento = --
*/

const num1 = 10;
const num2 = 3;
console.log(num1 ** num2);
console.log(num1 % num2);

let contador = 4;
contador++; //5
++contador; //6
console.log(contador);
console.log(++contador); //nao fazer

const passo = 2;
contador = 0;

contador += passo; // contador = contador + 2
contador += passo;
contador += passo;
contador += passo;
contador += passo;
contador += passo; //12
contador *= passo; //24 
console.log(contador);

const num3 = 10;
const num4 = parseInt('5.2'); //converter para int, numero inteiro
const num5 = 'Nahuel';
const num6 = parseFloat('5.2') //converter para floar, numero real, deconsole.log(num3 + num4); //15cimal
console.log(num3 * num5); // -> NaN = Not a Number
console.log(num3 + num4); //15
console.log(num3 + num6); //15.2

const numero = Number('6.2'); // Number vai entender e se adaptar ao numero
console.log(numero);