const promise1 = new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve("completed promise 1");
  }, 2000);
});
const promise2 = new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve("completed promise 1");
  }, 1000);
});

Promise.race([promise1, promise2]).then((res) => console.log(res));
 