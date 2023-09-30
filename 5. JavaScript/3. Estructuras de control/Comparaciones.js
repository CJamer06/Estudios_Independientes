//Comparaciones

let a = 5;
var b = 5;

// Dos iguales en JS solo compara el contenido de la variable.

if (a == b){
    console.log("'a' es igual a 'b' -> débil");
}

// Tres iguales comprueba el tipo y el valor de la variable
b = "b";
if (a === b) {
    console.log("'a' es igual a 'b' -> fuerte")
} else {
    console.log("'a' no es igual a 'b' -> fuerte")
}

// Deferencias, funciona similar a los iguales

if (a != b){
    console.log("'a' es igual a 'b' -> débil");
}

if (a !== b) {
    console.log("'a' es igual a 'b' -> fuerte")
} else {
    console.log("'a' no es igual a 'b' -> fuerte")
}


/* Por otra parte tenemos las desigualdades que cumplen con los siguiente
 
 < / <=
 > / >= 
 
*/

