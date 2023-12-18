// Union de Listas

const array1 = [1,3,5,7];
const array2 = [2,4,6,8];

console.log(array1.concat(array2));
console.log(array1);

const array3 = array1.concat(array2);
console.log(array3);

// Factor de propagación
console.log(...array3)

const array4 = [...array1, ...array2];
console.log(array4);