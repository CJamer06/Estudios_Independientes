// Operaciones Aritméticas y redondeo
let a = 3.5;
let b = 4.8;

//Suma (+)
console.log(a + b);

//Resta (-)
console.log(a - b);

// Multiplicación (*)
console.log(a * b);

//División (/)
console.log(a/b);


// Representación de los números en cadenas de texto
let a_s = a.toString();

console.log(a_s);
console.log(typeof a_s);

// Redondeo de números decimales
let c = 3.3;
let d = c * 3;

console.log(d); //Muestra un el error mencionado anterior mente en el almacenamiento.

// .toFixed(x)
console.log(d.toFixed(4)); // Cantidad de números decimales después de la coma.
console.log(typeof d.toFixed(3)); // Pero convierte la información a tipo String

// .toPrecision(x)
let e = 1234.5678942;
console.log(e.toPrecision(5));  // Imita el numero de cifras significativas (Con un redondeo matemático)
console.log(typeof d.toPrecision(4)); // Pero convierte la información a tipo String