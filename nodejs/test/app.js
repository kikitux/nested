var assert = require('assert');

var factorial = require('../build/Release/factorial');
var fibonacci = require('../build/Release/fibonacci');

assert(2+2==4, '2+2=4');

assert(factorial.fact(5)==120, 'factorial of 5 = 120');
assert(factorial.fact(6)==720, 'factorial of 6 = 720');

assert(102334155==fibonacci.fibo(40), 'fibo of 40');
assert(267914296==fibonacci.fibo(42), 'fibo of 42');
