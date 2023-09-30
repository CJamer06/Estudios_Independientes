let num = 10;
let factorial = 1;

while(num > 0){
    console.log("-->  " + num)
    if(num === 1){
        break;
    } else {
        factorial *= num;
    }

    num--;
}

console.log("El factorial de 10: "+factorial)