//               012345678...
let umaString = 'Um texto';

console.log(umaString[4]); // e, indica qual letra esta nesta possicao
console.log(umaString[8]); // undefined
console.log(umaString.charAt(6)); //t, indica qual letra esta nesta possicao
console.log(umaString.concat(' em', ' um', ' lindo dia.')); //concatenacao
console.log(umaString + ' em um lindo dia.');
console.log(`${umaString} em um lindo dia.`);
console.log(umaString.indexOf('Um', 3)); // nao existem um `Um` no indice 3
console.log(umaString.indexOf('o', 3)); // existe um 'o' no indice 7 da direita pra esquerda
console.log(umaString.lastIndexOf('o', 3)); // nao existe um 'o' no indice 3 da esquerda pra direita
console.log(umaString.match(/[a-z]/g)) // retorna as letras minusculas, o 'g' significa que é pra mostrar em forma de array
console.log(umaString.search(/[a-z]/)); // pedir pra encontrar uma certa letra
console.log(umaString.replace('Um', 'Outra')); // substituir 'Um' para 'Outra'
console.log(umaString.replace(/x/, 's')); // trocar os 'x' para 's'
console.log(umaString.length); // ver qnts caracteres tem na string (8)
console.log(umaString.slice(2, 5)); // inicio e fim de onde se retira as letras
console.log(umaString.slice(-3));
console.log(umaString.slice(5));
//o site w3schools ajuda a pesquisar sobre JavaScript
console.log(umaString.toUpperCase()); // a string ficara toda em maiuscula
console.log(umaString.toLowerCase()); // minuscula