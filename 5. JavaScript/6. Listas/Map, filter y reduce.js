// Métodos mas avanzados

const array = ["San sebastian", "Madrid","Barcelona", "Alicante", "Bilbao"];

const val = array.forEach(v => {
    console.log(v);
    return 4;
});

console.log(val)

const newArray = array.map((valor,indice) => `${indice+1} - ${valor}`);
console.log(newArray);

const arrayObj = [
    {nombre: "Nombre1", edad:20 },
    {nombre: "Nombre2", edad:31 },
    {nombre: "Nombre3", edad:12 },
    {nombre: "Nombre4", edad:23 },
    {nombre: "Nombre5", edad:44 },
    {nombre: "Nombre6", edad:5 }
];

/* const personasMayores = arrayObj.filter(obj =>{
    if (obj.edad>30) {
        return true;
    } else {
        return false;
    }
}); */

const personasMayores = arrayObj.filter(obj => obj.edad>30)
console.log(personasMayores);

const nuevaLista = arrayObj.filter( obj => obj.nombre !== "Nombre1");
console.log(nuevaLista);


const valores = [1, 5, 6, 7, 8, 3, 100];

const suma = valores.reduce((acumulado, cur, i, arrayOriginal) => {
    console.log(acumulado);
    console.log(cur);
    console.log(i);
    console.log(arrayOriginal);
    return acumulado + cur;
});

console.log(suma);