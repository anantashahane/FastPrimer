import Foundation

func Prime(upto: Int) -> [Int] {
    var primes = [Int]()
    var isPrime = [Bool](repeating: true, count: upto + 1)
    isPrime[0] = false
    isPrime[1] = false
    for number in 2...upto {
        if isPrime[number] {
            primes.append(number)
            for multiple in stride(from: number * number, to: upto + 1, by: number) {
                isPrime[multiple] = false
            }
        }
    }
    return primes
}

let clock = ContinuousClock()
var result = [Int]()
let upto = 1_000_000
let time = clock.measure {
    result = Prime(upto: upto)
}
print("CPU time used: \(Double((time / pow(10, 13)).components.attoseconds) / 100) ms.")
print("Found \(result.count) prime numbers in range: (1, \(upto)); took \(time).")
