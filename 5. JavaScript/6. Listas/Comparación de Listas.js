// Comparar listas

//.every()

const array = [4,5,6,7,85,4,3,78,24,54,63,76-5,-90,34,-10];

/* 
const resultado = array.every(valor => {
    if (typeof valor === "number"){
        return true;
    } else {
        return false;
    }
}); 
*/

const resultado = array.every(valor => valor > 0);

console.log(resultado);

// Comparación de listas

const ar1 = [1,2,3,4];
const ar2 = [1,2,3,4];

console.log(ar1 == ar2);
console.log(ar1 === ar2);

const compararArray = (array_1, array_2) => {
    if (array_1.length !== array_2.length){
        return false;
    }
    const res = array_1.every((valor,i) => valor === array_2[i]);
    return res;
};

console.log(compararArray(ar1, ar2));