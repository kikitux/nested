var factorial	= require('./build/Release/factorial');
var fibonacci	= require('./build/Release/fibonacci');
var restify     = require('restify');

function respondfact(req, res, next) {
  res.send("fact(" + req.params.number + ")=" + factorial.fact(parseInt(req.params.number)) );
  next();
}

function respondfibo(req, res, next) {
  res.send("fibo(" + req.params.number + ")=" + fibonacci.fibo(parseInt(req.params.number)) );
  next();
}

var server = restify.createServer();

server.get('/fact/:number', respondfact);
server.head('/fact/:number', respondfact);

server.get('/fibo/:number', respondfibo);
server.head('/fibo/:number', respondfibo);

server.listen(8080, function() {
  console.log('%s listening at %s', server.name, server.url);
});
