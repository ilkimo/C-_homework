# Missing Numbers
## objective
Given a sequence of integers X, create an algorithm that produces a sequence of integers Y,
composed of all the numbers NOT present in X between min (X) and max (X).

More formally: let X be included in N (together with natural numbers),
construct Y included in N such that for each element x € N and x not € X => x € Y.

## build
To build this application just execute
```
make compile
```
or to **build, test and run**, just use
```
make
```

## test
```
make test
```

## run
To execute a prepared execution, run:
```
make run
```
To insert custom args, run:
```
make run <number1> <number2> <number3> ...
```
without "<>" chars. So for example:
```
make run 5 8 1 22
```