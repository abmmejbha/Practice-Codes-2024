// Traditional for loop
/*
var numbers = [10,20,30,40,50]

for(let x=0; x<numbers.length; x++)
{
    console.log(numbers[x]);
}
    */

// new for each loop
var numbers = [10, 20, 30, 40, 50];

/*
numbers.forEach(myFunction)         // forEach is a function which receives a function "myFunction"
function myFunction(x)              // forEach function pass all elements to that function
{                                   // now that function has all elements of numbers
    console.log(x)                  // now evoke that function to work
}
*/

// one line (made it simple)
numbers.forEach((x) => console.log(x));


// make square of that array
var squareNumbers = []
numbers.forEach((x) => squareNumbers.push(x*x))
console.log(squareNumbers);


// add 5 to each elements of that array
numbers.forEach((x,index,arr) => arr[index] = x+5)
console.log(numbers);
