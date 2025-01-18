// PROJECT EULER PROBLEM 5 - SOLUTION BY PARSA FARJAM
#include <iostream>
#include <vector>

using namespace std;

/** Prime number detection function
 * @input: x, an integer
 * @return true if x is prime, false if x is not prime
 */
bool is_prime(int x){
    for (int i = 2; i*i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

/** Power function
 * @input: a, an integer
 * @input: b, an integer
 * @return a^b
 */
int power(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

/** Prime factor decomposition function
 * @input: n, an integer
 * @return a vector<int> of length n where the indexes are the prime factors and the values at each index are the powers of each prime factor. If an index isnt a prime factor, the value of the index will be zero
 */
vector<int> prime_factors(int n) {
    vector<int> return_value (n+1);
    int pwr;
    int original_c;

    for (int c = 2; c <= n; c++) {

        pwr = 0;
        original_c = c;

        if (n % c == 0 and is_prime(c)) {

            while(n % power(c, pwr) == 0) {
                pwr += 1;
            } 

            return_value[c] = pwr - 1;
        } else {
            return_value[c] = 0;
        }
    }

    return return_value;
}

/** Print vector<int> function (for debugging purposes)
 * @input: v, a vector<int>
 * prints the elements of v
 */
void print_vector_int(vector<int> v) {
    cout << "[";
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << ", ";
    }
    cout << v[v.size() - 1] << "]" << endl;
}





int main() {
    int maximum = 20; // Change to set maximum
    vector<int> factors (maximum + 1);

    // Initializing the factors vector
    for (int i = 0; i < factors.size(); i++) {
        factors[i] = 0;
    }

    // Filling the factors vector
    vector<int> number_factors;
    for (int number = 2; number <= maximum; number++) {

        number_factors = prime_factors(number);

        for (int index = 2; index < number_factors.size(); index++) {

            if (number_factors[index] > factors[index]) {
                factors[index] = number_factors[index];
            }

        }

    }

    // Calculating the result
    int result = 1;
    for (int factor = 1; factor < factors.size(); factor++) {
        result = result * power(factor, factors[factor]);
    }

    cout << "The smallest number that can be divided by each of the numbers from 1 to " << maximum << " without any remainder is " << result << endl;
}