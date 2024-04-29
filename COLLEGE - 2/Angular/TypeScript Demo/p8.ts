// Array
/*let fruit1: string[] = ['Apple', 'Orange', 'Banana']; 
let fruit2: Array<string> = ['Apple', 'Orange', 'Banana']; 
let ids: Array<number>;
ids = [23, 34, 100, 124, 44]; 
let values: (string | number)[] = ['Apple', 2, 'Orange', 3, 4, 'Banana']; 
let values: Array<string | number> = ['Apple', 2, 'Orange', 3, 4, 'Banana']; */

let fruits: string[] = ['Apple', 'Orange', 'Banana']; 
fruits[0]; // returns Apple
fruits[1]; // returns Orange
fruits[2]; // returns Banana
//fruits[3]; // returns undefined

for(var index in fruits)
{ 
    console.log(fruits[index]);  // output: Apple Orange Banana
}

for(var i = 0; i < fruits.length; i++)
{ 
    console.log(fruits[i]); // output: Apple Orange Banana
}


// Methods
var fruits2: Array<string> = ['Apple', 'Orange', 'Banana']; 
fruits2.sort(); 
console.log(fruits2); //output: [ 'Apple', 'Banana', 'Orange' ]

console.log(fruits2.pop()); //output: Orange

fruits2.push('Papaya'); 
console.log(fruits2); //output: ['Apple', 'Banana', 'Papaya']

fruits2 = fruits2.concat(['Fig', 'Mango']); 
console.log(fruits2); //output: ['Apple', 'Banana', 'Papaya', 'Fig', 'Mango'] 

console.log(fruits2.indexOf('Papaya'));//output: 2 
