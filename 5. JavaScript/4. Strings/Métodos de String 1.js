//Metodos mas usados con las cadenas de caracteres

// Longitud de una cadena
let str = "Hola soy un string";
console.log(str.length);

//Obtener parte de cadenas de caracteres
// slice() substring() substr()
let slice_str = str.slice(5, 10);
console.log(slice_str);

let substring_str = str.substring(5,10);
console.log(substring_str);

let substr_str = str.substr(5, 10);
console.log(substr_str);


// Reemplazar parte del contenido de una cadena
let cadena = "Hola mi nombre es Carlos, mi padre se llama Carlos igual que mi hermano mayor";
console.log(cadena);

// Solo aplica sobre la primera instancia.
console.log(cadena.replace('Carlos','Juan'));

// A utilizar la expresión regular global /g remplazaría todas las instancias
console.log(cadena.replace(/Carlos/g,'Luis'));