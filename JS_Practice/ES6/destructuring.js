// array destructure
let numbers = [10, 20, 30, 40, 50];
let [n1, n2, n3, n4, n5] = numbers;
console.log(n1);
console.log(n2);

// swap variables
let a = 10,
  b = 20; // if you dont put ';' semicolon ,there will  be an error
[a, b] = [b, a];
console.log(a, b);

// object destructure
const studentInfo = {
  id: 101,
  fullName: "mejbha",
  gpa: 3.93,
  language: {
    native: "bangla",
    beginner: "english",
  },
};

const { fullName, language } = studentInfo;
console.log(fullName);
console.log(language.native);

//destructuring function parameters
const studentInf = () => {};
