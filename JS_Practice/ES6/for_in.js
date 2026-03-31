//for in is used for iterate for object

let students = {
    id : 101,
    name: "abm mejbha",
    cgpa: 3.82
}
/*
for(let x in students) {
    console.log(x,":", students[x]);
}
    */

for(let x in students) {
    console.log(`${x}: ${students[x]}`);
}