
// creating a object
var students = [
  {
    id: 101,
    name: "mejbha",
    gpa: 2.56,
  },
  {
    id: 102,
    name: "salam",
    gpa: 4.53,
  },
  {
    id: 103,
    name: "rafik",
    gpa: 4.43,
  },
];

//console.log(students);

let stu_nam=() =>  students.filter((x) => x.gpa > 3).map((y) => y.name);

console.log(studentsNames1());
