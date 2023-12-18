// Iterar una lista

let array = [1,2,3,4,5,6,70,80,90,100];

// Metodo antiguo
for (let i = 0; i < array.length; i++) {
    console.log(array[i]);
}

// .forEach()
let suma = 0;
array.forEach(valor => {
    suma += valor;
    console.log(valor)
})

console.log(suma);

// Búsqueda / Se aplica mejor para la búsqueda de objetos
/* 
    const variable = array.find(valor =>{
        if(valor === 90){
            return true;
        }
    }); 
*/

/* 
    const variable = array.find(valor =>{
        return valor === 90
    }); 
*/

const variable = array.find(valor => valor === 90);

console.log(variable);

// Este método se puede utilizar de manera mas eficiente para arreglos 