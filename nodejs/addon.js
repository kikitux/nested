var sum = require('./build/Release/sum');
var factorial = require('./build/Release/factorial');

console.log('This should be eight:', sum.add(3, 5));
console.log('100*100 100*100', sum.add(100*100, 100*100));
console.log('This should be 120:', factorial.fact(5));
