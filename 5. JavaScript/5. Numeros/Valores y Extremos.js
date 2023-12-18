// Operador .valueOf() - obtener valores numéricos a partir de literales

let a = 2;
let b = new Number(3); /* Esto se sigue comportando como un numero */

console.log(a);
console.log(b);
console.log(a + b);

console.log(b.valueOf());

let str = new String("Hola mundo");

console.log(str);
console.log(str.valueOf());

// NaN (Not a number)- Infinity

let n = Number('adios');
console.log(n);

console.log(isNaN(n));

let numerador = 19;
let divisor = 2;

console.log(numerador/divisor);
console.log(numerador/0);

// Conversion de String a numero
let num1 = "5.29";
let num2 = 17.2;
let num3 = 4;

console.log(typeof num1);
console.log(num1 + num2);

console.log(Number(num1) + num2); /* Se convierte de un String a un Int utilizando Number() */

console.log(parseInt(num1)); /* Convierte solo a números enteros obviando lo que hay después de una coma */
console.log(parseFloat(num1)); /* Convierte a numero tanto números enteros como sus partes decimales */

console.log(parseInt(num3));
console.log(parseFloat(num3));

// Número hexadecimales

let numHex = '0x0b74f';
console.log(parseInt(numHex, 16));
console.log(parseInt(numHex));

// Obtener valores máximos y mínimos
let min_precision = Number.EPSILON;
let min_valor_JS = Number.MIN_VALUE;
let max_valor_JS = Number.MAX_VALUE;

console.log(min_precision);
console.log(min_valor_JS);
console.log(max_valor_JS);