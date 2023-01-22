// Verifique se a sua idade é maior do que a de algum parente
// Dependendo do resultado coloque no console 'É maior', 'É igual' ou 'É menor'
var idadeNahuel = 22;
var idadeGabriel = 24;

if (idadeNahuel < idadeGabriel) {
    console.log(`É menor`);
}
if (idadeGabriel < idadeNahuel) {
    console.log(`É maior`);
}
if (idadeNahuel == idadeGabriel) {
    console.log(`É igual`);
}

// Qual valor é retornado na seguinte expressão?
var expressao = (5 - 2) && (5 - ' ') && (5 - 2);

if (expressao == false) {
    console.log(`Falso`);
} else {
    console.log(`True`); // é true
}


// Verifique se as seguintes variáveis são Truthy ou Falsy
var nome = 'Andre'; //true
var idade = 28; // true
var possuiDoutorado = false; // false
var empregoFuturo; // false
var dinheiroNaConta = 0; // false

console.log(!!nome, !!idade, !!possuiDoutorado, !!empregoFuturo, !!dinheiroNaConta)

// Compare o total de habitantes do Brasil com China (valor em milhões)
var brasil = 207;
var china = 1340;

if (brasil > chine) {
    console.log(`Brasil é mais populoso`);
}
if (brasil < china) {
    console.log(`China é mais populoso`);
}

// O que irá aparecer no console?
if (('Gato' === 'gato') && (5 > 2)) {
    console.log('Verdadeiro'); // vai aparecer falso, pois Gato nao é igual a gato, letra minuscula
} else {
    console.log('Falso');
}

// O que irá aparecer no console?
if (('Gato' === 'gato') || (5 > 2)) {
    console.log('Gato' && 'Cão'); // vai aparecer cao, pois || caça um true e no & pega o ultimo true
} else {
    console.log('Falso');
}