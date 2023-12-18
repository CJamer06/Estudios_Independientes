// Listas o Vectores
let array = [1,'hola',NaN,undefined,'45',62];
console.log(array);

// Acceder por una posición

console.log(array[0])
console.log(array[1]);
console.log(array[2]);
console.log(array[3]);
console.log(array[4]);
console.log(array[5]);

// Métodos para agregar información al Array

//.push() -> Cambia el tamaño del array y modifica el ultimo valor del array
array.push("final", 2 , '46', NaN);
console.log(array);

// .unshift() -> Cambia el tamaño del array y modifica el primer valor del array
array.unshift("inicio", 0);
console.log(array);

// Métodos para eliminar información del array

//.pop() -> Elimina los valores del final del array (Elimina de uno en uno)
array.pop();
array.pop();
array.pop();
array.pop();
console.log(array)

//.shift() -> Elimina los valores del inicio del array (Elimina de uno en uno)

array.shift();
array.shift();
console.log(array);

// Método para eliminar,modificar o añadir en nuestro array

let array1 = [1,2,3,4,5,6];

// .splice(x,y,z) -> (Indice, numValoresEliminar)
array1.splice(2, 1);
console.log(array1);

// .splice(x,y,z) -> (Indice, 0, valoresAgregar)
array1.splice(2, 0, 'hola');
console.log(array1);

// .splice(x,y,z) -> (Indice, numValoresEliminar, valoresAgregar)
array1.splice(2,1,3);
console.log(array1);