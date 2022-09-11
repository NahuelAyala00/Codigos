alert('A nossa mensagem.');
window.confirm('Desja realmente apagar?'); // devolve um valor booleano
window.prompt('Digite o seu nome: '); // janela com uma caixa de texto
//limpar console ctrl + L

let num1 = prompt(`Digite o primeiro numero`);
let num2 = prompt(`Digite o segundo numero`);
num1 = Number(num1);
num2 = Number(num2);
let resultado = num1 + num2;
alert(`O resultado da adicao = ${resultado}`);