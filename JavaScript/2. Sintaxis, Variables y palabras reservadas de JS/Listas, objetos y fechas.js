//Listas, arreglos o array
const lista1 = [1, "hola", true, undefined, null];
const lista2 = new Array(2, "hola", true, undefined, null); //Array(lista1) copiaría los datos de la lista 1
const lista3 = new Array(3) // Crea espacios vacíos.
const lista4 = [lista1,lista2,lista3];

lista3[0] = "Soy el primer elemento, index 0";

console.log(lista1);
console.log(lista2);
console.log(lista3);
console.log(lista4)
//Objetos 
const movil = {
    altura: 10,
    anchura: 5,
    marca: "Xiaomi",
    isWhite: false,
    contactos: ["Carlos", "Maria"],
    tarjeta: {
        nombre: "MasterCard",
        codigo: "0221"
    }
}

    // Para acceder a los datos de un objeto usamos la cadena .

    console.log(movil.altura);
    console.log(movil.anchura);
    console.log(movil.contactos);
    console.log(movil.tarjeta.nombre)

    movil.anyo = 2019;// se crea un nuevo atributo
    movil.marca = "Samsung"; //Con esto editamos los atributos.

    console.log(movil.marca);

//Fechas

const ahora = new Date();
console.log(ahora);

fecha_milis = new Date(10) //Usando milisegundos.
console.log(fecha_milis);

fecha_cadena = new Date("Mayo 18 2023");
console.log(fecha_cadena)

const dia = ahora.getDate();
const mes = ahora.getMonth(4);
const anyo = ahora.getFullYear();

onsole.log(dia, mes, anyo);
