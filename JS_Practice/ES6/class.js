// creating class
class student {
    constructor(id, name){
        this.id = id
        this.name = name
    }

    set studentName(name) {
        this.name = name
    }

    get studentInfo(){
        return this.id + " " + this.name
    }
}

//creating object "s1"
let s1 = new student(101, "abm")

console.log(s1);
console.log(s1.studentInfo);