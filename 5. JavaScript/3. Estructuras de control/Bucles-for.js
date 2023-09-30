// Bucles
var list = [];
let persona = {
    nombre: "Carlos",
    apellido: "Amaranto",
    edad: 21,
    isDeveloper: true
}


//Bucles de tipo for
console.log("-- Contador -- \n");

for (let i = 0; i < 5; i++) {
    console.log("Contamos: ", i);
    list[i] = i;
}

console.log(list)


// (For...of) Permite recorrer de mejor manera estructuras como vectores, sin conocer su longitud
for (const i of list) {
    console.log(i)
}

// For...Each, Es una forma aun mas eficiente que las 2 anteriores y a que esta es especifica para vectores.
list.forEach(valor => {
    console.log(valor);
});

// De estas forma podemos acceder a la información dentro de una estructura.
let prop = "edad";
console.log(persona[prop]); 
console.log(persona.edad); 


//For...in
for (const propiedades in persona) {
    console.log(propiedades);
    console.log(persona[propiedades]);
}