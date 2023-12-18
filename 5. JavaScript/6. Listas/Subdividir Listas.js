// Como obtener listas a partir de otras .slice()
const array = ["Hola", 1, 2, 3, true, null, "Adios"]

// .slice(indiceInicial, indiceFinal)

console.log(array.slice(1, 3));

const array2 = array.slice(1, 5);
console.log(array2);


const array3 = array.slice(-6, -2);
console.log(array3);