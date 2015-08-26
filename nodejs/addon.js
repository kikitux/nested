var factorial = require('./build/Release/factorial');
var fibonacci = require('./build/Release/fibonacci');

console.log('This should be 120:', factorial.fact(5));
console.log('This should be 720:', factorial.fact(6));
console.log('This should be 102334155:', fibonacci.fibo(40));
console.log('This should be 267914296:', fibonacci.fibo(42));
