// PROJECT EULER PROBLEM 6 - SOLUTION BY PARSA FARJAM
// NOTE: THERE IS SURELY A MORE ELEGANT SOLUTION, BUT I AM TOO LAZY TO FIND IT.
#include <stdio.h>

int main() {
    int desired_max = 100; // Change to modify the highest number reached


    unsigned long int square_of_sum = 1;
    unsigned long int sum_of_squares = 1;
    for (int i = 2; i <= desired_max; i++) {
        square_of_sum += i;
        sum_of_squares += i*i;
    }
    square_of_sum = square_of_sum * square_of_sum;


    printf("%lu", square_of_sum - sum_of_squares);
    printf("\n");

    return 0;
}
