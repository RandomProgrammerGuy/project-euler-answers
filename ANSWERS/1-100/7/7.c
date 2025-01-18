// PROJECT EULER PROBLEM 7 - SOLUTION BY PARSA FARJAM
#include <stdio.h>

/** Prime number detection function
 * @input: x, an integer
 * @return true if x is prime, false if x is not prime
 */
int is_prime(int x){
    for (int i = 2; i*i <= x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int nth_prime = 10001;
    int n_primes_found = 0;
    int current_number = 2;
    while (n_primes_found < nth_prime) {
        if (is_prime(current_number) == 1) {
            n_primes_found++;
        }

        current_number++;
    }

    printf("%d", current_number - 1);
    printf("\n");
    return 0;
}