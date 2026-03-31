//callback function

function square(x){
    console.log(`square of ${x}: ${x*x}`);
}

const y = square;

function higherOrderFunction(num, callback) {
    callback(num)
}

higherOrderFunction(6, y)


