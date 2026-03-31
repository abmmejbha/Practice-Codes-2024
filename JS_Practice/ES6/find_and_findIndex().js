// find(callback, value) return the value of the first element that pas certain condition

let numbers  = [5,55, 14, 5,77]
// let firstEvenNumber = numbers.find((x) => x%2===0)
// console.log(firstEvenNumber);

const evenNumber = (x) => x%2===0 ? x : ''
//console.log(evenNumber);

let firstEvenNumber = numbers.find(evenNumber)
let firstEvenNumberIndex = numbers.findIndex(evenNumber)
console.log(firstEvenNumber);
console.log(firstEvenNumberIndex);

// findIndex(Callback, value) return the index of the first element that pass certain condition

