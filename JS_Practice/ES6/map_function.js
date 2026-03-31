// we did this using forEach
/*
var numbers = [10, 20, 30, 40, 50];
var squareNumbers = []
numbers.forEach((x) => squareNumbers.push(x*x))
console.log(squareNumbers);
*/

// now same code with map function
var numbers = [10, 20, 30, 40, 50];
var squareNumbers = numbers.map((x) => x * x);
console.log(squareNumbers);

var newNumbers = numbers.filter((x) => x>30) // condition
console.log(newNumbers);