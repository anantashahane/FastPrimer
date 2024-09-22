# FastPrimer
Prime number generator whill exploiting processor's prefetch architecture go brrrrr.

## Usage
Running `python prime.py` with `python 3.12.5` lead to the following output:
```
  $ python prime.py
  Time:  67.59214401245117 ms.
  Found  78498  primes.
```

Running `swiftc prime.swift && ./prime` with `Swift 6.0` lead to the following output:
```
CPU time used: 347.3 ms.
Found 78498 prime numbers in range: (1, 1000000); took 0.347301125 seconds.
```
while running `swiftc prime.swift -O && ./prime` lead to the following output:
```
CPU time used: 3.69 ms.
Found 78498 prime numbers in range: (1, 1000000); took 0.003694375 seconds.
```
As for C++, running `g++ prime.cpp -o prime && ./prime` with `clang-1600.0.26.3` lead to the following output:
```
CPU time used: 64.506 ms
Primes: 78498
```
And running `g++ prime.cpp -o prime -O3 && ./prime` leads to the following output:
```
CPU time used: 6.926 ms
Primes: 78498
```
