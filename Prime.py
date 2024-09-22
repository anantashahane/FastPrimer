import time

def Prime(upto):
    primes = []
    mapPrimes = [True] * (upto + 1)
    mapPrimes[0] = mapPrimes[1] = False
    for i in range(2, upto + 1):
        if mapPrimes[i]:
            primes.append(i)
            for j in range(i * i, upto + 1, i):
                mapPrimes[j] = False
    return primes


clock = time.time()
primes = Prime(1000000)
clock = time.time() - clock
print("Time: ", clock * 1000, "ms.")
print("Found ", len(primes), " primes.")
