# Cip & Ciop
## Language used
C++

## objective
Given x, y, min and max, create an algorithm that, taken the numbers between min and max, produces
a sequence of strings formed in the following way:
* at all numbers multiples of x the string must contain "Cip"
* at all numbers multiples of y the string must contain "Ciop"
* at all other numbers the string must contain the number itself

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
make run <x> <y> <min> <max>
```
without "<>" chars. So for example:
```
make run 5 8 1 22
```