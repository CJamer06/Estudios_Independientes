// Métodos de cadenas de texto (Parte 3)

let texto_largo = "En medio de un exuberante bosque, los rayos dorados del sol se filtran entre las ramas de los altos árboles, pintando un tapiz de luces y sombras en el suelo cubierto de hojas crujientes. El susurro suave del viento mece las hojas, creando una sinfonía natural que envuelve el entorno en una serenidad etérea. A medida que avanzas por el sendero cubierto de musgo, el aroma fresco de la tierra y la vegetación se entrelaza con el canto melodioso de los pájaros, creando una experiencia sensorial que transporta a un reino de tranquilidad y conexión con la naturaleza. Cada paso revela la riqueza de la biodiversidad que habita en este santuario verde, recordándonos la asombrosa complejidad y armonía que define nuestro vasto planeta."

console.log(texto_largo.match(/los/g))

//Existe la palabra dentro del texto
console.log(texto_largo.includes("melodioso"))

//Saber si un texto empieza con una palabra
console.log(texto_largo.startsWith("En medio de un exuberante"))

//Saber si un texto termina con otra palabra
console.log(texto_largo.endsWith("planeta"))