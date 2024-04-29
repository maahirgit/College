//Example: Named Function

function display() 
{
    console.log("Hello TypeScript!");
}

display(); 

// Example: Function with Parameter and Return Types
function addNumbers(a: number, b: number) 
{ 
    return a + b; 
} 
var sum = addNumbers(10,15) 
console.log('Sum of the two numbers is: ' +sum); 