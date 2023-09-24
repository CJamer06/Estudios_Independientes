function saludo(){
    console.log(" --> Bienvenido al programa que calcula el valor factorial <--\n");
}

function FactorialMin(b) {
    if(b === 1){
        return 1;
    } else {
        return b * FactorialMin(b-1)
    }
}

function generarNumeroAleatorio(min, max) {
    return Math.floor(Math.random() * (max - min) + min);
}


saludo();

var i = 0;
let num = generarNumeroAleatorio(1, 20);     // Declaración de constante
let fact = 1;

console.log("Valor --> "+ num);

if(num > 10){
    i = 1;
} else {
    i = 2
}

switch(i){
    case 1: 
        console.log("Factorial de "+num+": " + FactorialMin(num));
    break;

    case 2:
        Aux = num;
        while (1 < num) {
            fact *= num;
            num-=1;
        }

        console.log("Factorial de "+Aux+": "+fact)
    break;
}