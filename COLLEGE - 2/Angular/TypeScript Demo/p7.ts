// Data Types Methods
    //toFixed() 

console.log("toFixed() Method");
var myNumber: number = 10.8788;

console.log(myNumber.toFixed()); 
console.log(myNumber.toFixed(1)); 
console.log(myNumber.toFixed(2)); 

console.log ("--------------------");

console.log("toString() Method");
var myNumber1: number = 123;
var myNumber2: number = 123;
console.log(myNumber1 + myNumber2);
console.log(myNumber1.toString()); 
var a = myNumber1.toString();
var b = myNumber2.toString();
console.log(a+b);

console.log ("--------------------");
console.log("charAt() Method");
var str: string = 'Hello TypeScript';
console.log(str.charAt(0)); // 
console.log(str.charAt(2)); 
console.log("Hello World".charAt(2));

console.log ("--------------------");
console.log("concat() Method");
let str1: string = 'Hello';
let str2: string = 'TypeScript';
var x = str1.concat(str2); 
console.log(x);
console.log(str1.concat(' ', str2));
console.log(str1.concat(' Mr. ', 'Bond')); 

console.log ("--------------------");
console.log("indexOf() Method");
var abc: string = 'TypeScript';

console.log(abc.indexOf('T')); 
console.log(abc.indexOf('p')); 
console.log(abc.indexOf('e')); 
console.log(abc.indexOf('T', 1)); 
console.log(abc.indexOf('t', 1)); 

console.log ("--------------------");
console.log("replace() Method");
let s1: string = 'Hello Javascript';
let s2: string = 'TypeScript';

console.log(s1.replace('Java', 'Type')); 
console.log(s1.replace('JavaScript', s2)); 
console.log(s1.replace('Hello', 'Hi')); 

console.log ("--------------------");
console.log("Uppercase and Lowercase Method");
var  x1: string = 'Hello Typescript';
console.log(x1.toUpperCase());
console.log(x1.toLowerCase());





