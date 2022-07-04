const nome = `Nahuel Isaias`;
const sobrenome = `Ayala`;
const idade = `21`;
const altura = `1.85`
const peso = `90`;
let imc = peso; // peso/(altura*altura)
let anoNascimento = 2022 - idade;

imc = peso / (altura * altura);
console.log(imc);
console.log(anoNascimento);
console.log(`${nome} ${sobrenome} tem ${idade} anos, pesa ${peso}kg`);
console.log(`tem ${altura} de altura e seu IMC é de ${imc}`);
console.log(`${nome} nasceu em ${anoNascimento}.`);

console.log(`tem ${altura} de altura e seu IMC é de ${imc}`);