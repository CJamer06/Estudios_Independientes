const num = 10;
let i = 1;
let factorial = 1;

while (num >= i++) {
    factorial *= i;
}

console.log("El factorial de 10: " + factorial);