# Missing Numbers
## Language used
Haskell

## objective
Given a sequence of integers X, create an algorithm that produces a sequence of integers Y,
composed of all the numbers NOT present in X between min (X) and max (X).

More formally: let X be included in N (together with natural numbers),
construct Y included in N such that for each element x € N and x not € X => x € Y.

## build
To build this application, installing [ghci](https://docs.haskellstack.org/en/stable/install_and_upgrade/#linux) is required, something like
```
sudo apt-get install -y ghc-ghci
```
should make the job

## run
To open ghci
```
ghci
```
To load .hs file
```
:l missingNumbers.hs
```
To test the program:
```
missingNumbers []
missingNumbers [1]
missingNumbers [10, 5, 1]
```
To exit ghci
```
ctrl-D
```