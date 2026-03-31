const taskOne = (callback) => {
  console.log("Task 1");
  callback()
};

const taskTwo = (callback) => {
  setTimeout(() => {
    console.log("Task 2 .Data Loading");
    callback()
  }, 2000);
};

const taskThree = (callback) => {
  console.log("task 3");
  callback()
};

const taskFour = (callback) => {
  console.log("task 4");
  callback()
};

taskOne( ()=>{
    taskTwo(()=>{
        taskThree(()=>{
            taskFour(()=>{
            })
        })
    })
})

