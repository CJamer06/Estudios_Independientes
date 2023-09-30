// Else If


function generarNumeroAleatorio(min, max) {
    return Math.floor(Math.random() * (max - min) + min);
}

var i = generarNumeroAleatorio(0,5);

console.log("Numero generado: ", i);

if (i === 5){
    console.log("Excelente");
}else if (i === 4){
    console.log("Bien");
} else if (i === 3){
    console.log("Suficiente");
} else if (i === 2){
    console.log("Cerca");
}else {
    console.log("Insuficiente");
}   


// Switch Case

switch (i){
    case 5:
        console.log("Excelente");
        break;
    
    case 4:
        console.log("Bien");
        break;

    case 3:
        console.log("Suficiente");
        break;

    case 2:
        console.log("Cerca");
        break;

    default:
        console.log("Insuficiente");
        break;
}