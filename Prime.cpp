#include <iostream>
#include <cstdint>
#include <vector>

using std::cout;
using std::endl;
typedef std::vector<uint64_t> intVector;
typedef std::vector<bool> boolVector;

intVector Primes(uint64_t upto) {
    intVector primes;
    boolVector primeMap(upto + 1, true);
    primeMap[0] = false;
    primeMap[1] = false;
    for (uint64_t i = 2; i <= upto; i++) {
        if (primeMap[i]) {
            primes.push_back(i);
            for (uint64_t j = i * i; j <= upto; j += i) {
                primeMap[j] = false;
            }
        }
    }
    return primes;
}

int main() {
    const std::clock_t c_start = std::clock();
    intVector primes = Primes(1000000);
    const std::clock_t c_end = std::clock();

    cout << "CPU time used: " << 1000.0 * (c_end - c_start) / CLOCKS_PER_SEC << " ms" << endl;
    cout << "Primes: " << primes.size() << endl;
}
