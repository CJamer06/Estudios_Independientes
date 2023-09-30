// Métodos de cadenas de texto (parte 2)
let input = "Geminis";
let db = "geminis";

console.log(input === db);

// toLowerCase - toUpperCase()
console.log(input);
console.log(db);

console.log(input.toLowerCase() === db.toLowerCase());
console.log(input.toUpperCase() === db.toUpperCase());

console.log(input.toLowerCase());
console.log(input.toUpperCase());

// Concatenar cadena

let str1 = "Cadena numero 1";
let str2 = "Cadena numero 2";

console.log(str1.concat(" - ", str2));
console.log(str1 + " - " + str2);
console.log(`${str1} - ${str2}`);

// Eliminarlos espacios al inicio y al final

let str3 = "   Cadena numero 3    ";
console.log(str3.length);
//trim()
console.log(str3.trim().length);
console.log(str3.trimStart().length);
console.log(str3.trimEnd().length);


//Obtener el carácter de cierta posición
let str4 = "Cadena numero 4";

console.log(str4.charAt(5));
console.log(str4[3]);

//Obtener la posición
let str5 = "Cadena numero 5 y Cadena numero 6";

console.log(str5.indexOf("numero")); // Indica en donde empieza la cadena pero solo la primera instancia
console.log(str5.charAt(7));

console.log(str5.lastIndexOf("numero")); // Indica en donde empieza la cadena pero solo la ultima instancia
console.log(str5.charAt(25));