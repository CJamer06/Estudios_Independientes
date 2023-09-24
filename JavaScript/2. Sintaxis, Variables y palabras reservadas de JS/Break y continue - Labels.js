// Break y continue

// labels

let unidades = 0;
let decenas = 0;


bucleDecenas: while (true) {
    bucleUnidades: while (true) {
        console.log('El numero actual es:', decenas,unidades);
        unidades++;
        if(unidades === 10) {
            unidades = 0;
            break bucleUnidades;
        }
    }

    decenas++
    if(decenas === 2){
        console.log("El numero actual es:",decenas,unidades)
        break bucleDecenas;
    }
}

// Con las labels lo que se busca e poder afectar a otros bucles aun cuando estos son externos.
