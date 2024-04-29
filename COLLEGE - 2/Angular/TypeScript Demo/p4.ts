//Example: Anonymous Function
let greeting = function() {
    console.log("Hello TypeScript!");
};

greeting(); //Output: Hello TypeScript! 

//Example: Function with Paramter and Return Types
var Sum = function(x: number, y: number) 
{
    return x+y;
}

console.log(Sum(2,3));
