function display1() {
  console.log("I am display1");
}

const display2 = () => {
  console.log("I am display2");
};

display1();
display2();

function message1() {
  return "Hi i am message1";
}

const message2 = () => {
  console.log("message 2");
};

// more simplified no return type
const message3 = () => "hi i am message";

console.log("message 1");
console.log("message 2");

function add(num1, num2) {
  return num1 + num2;
}

const add2 = (num1, num2) => num1 + num2;

console.log(add(10, 20));
console.log(add2(69, 20));
