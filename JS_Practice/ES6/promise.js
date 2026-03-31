console.log("welcome");
// how to create a promise (pending , reoslve, reject)

const promise1 = new Promise((resolve, reject) => {
  let completedPromise1 = false;
  if (completedPromise1) {
    resolve("completed promise 1");
  } else {
    reject(new Error("not completed promise 1"));
  }
});

promise1
  .then((res) => {
    console.log(res);
  })
  .catch((err) => {
    console.log(err.message);
  });

console.log("end");
