## nested nodejs addon

This is a c++ nodejs addon that provide `factorial.fact()` and `fibonacci.fibo()` funtions.

Then in `nodejs` using `restify` this funtions are exposed as `/fact/:number` and `/fibo/:number`.

### Pre Requisities:

- `c++11`
- node 0.12
- npm

Tested on OSX 10.10.5 and Ubuntu.

For ubuntu 12.04, consider using:

- `gcc-4.8`
- `g++-4.8`

Build as:
`npm install .`

Then run as:
`node app.js`

### Sample run:
```bash
$ curl http://localhost:8080/fibo/3
"fibo(3)=2"
$ curl http://localhost:8080/fibo/40
"fibo(40)=102334155"
```

