//Tipos primitivos 

//Number
4;
0;

//String

"Hola mundo";
'Hola mundo';

//Boolean

true;
false;

//Null y undefine

null;
undefined;

// null, undefine, false, 0 ==> Todas sin falsy, funcionan de forma similar, pero no son la misma vaina.

console.log(null === undefined); // *Null* no es lo mismo que *undefine*

if (null){
    console.log("Cumple")
} else {
    console.log("No cumple")
}