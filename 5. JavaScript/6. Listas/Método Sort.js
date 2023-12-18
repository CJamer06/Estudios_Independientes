// .sort() -> Modifica el array

const array = [2, 5, 9, 15, 32, 92, 3, 0, 1, 4];
 
console.log(array);

array.sort((a,b) => {
    if (a<b){
        return -1;
    } else if (a>b){
        return 1;
    } else {
        return 0;
    }
});

console.log(array);

// Ordenar unicamente arrays numéricos

const arrayNumerico = [2, 5, 9, 15, 32, 92, 3, 0, 1, 4];
arrayNumerico.sort((a,b) => a - b);
console.log(arrayNumerico);

arrayNumerico.sort((a,b) => b - a);
console.log(arrayNumerico);

// Array de objetos

const arrayObj = [
    {nombre: "Nombre1", edad:20 },
    {nombre: "Nombre2", edad:31 },
    {nombre: "Nombre3", edad:12 },
    {nombre: "Nombre4", edad:23 },
    {nombre: "Nombre5", edad:44 },
    {nombre: "Nombre6", edad:5 }
];

arrayObj.sort((a,b) => {
    if (a.edad < b.edad){
        return -1;
    } else if (a.edad > b.edad){
        return 1;
    } else {
        return 0;
    }
});

arrayObj.sort((a,b) => a.edad - b.edad);
console.log(arrayObj);

arrayObj.sort((a,b) => b.edad - a.edad);
console.log(arrayObj);