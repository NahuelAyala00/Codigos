function funcaoC(callback) {
    console.log("Sou a função C");
    callback();
}

function funcaoD() {
    console.log("Sou a função D");
}

funcaoC(funcaoD); // imprime "Sou a função C" e depois "Sou a função D"