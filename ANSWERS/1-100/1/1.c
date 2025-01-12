// PROJECT EULER PROBLEM 1 - SOLUTION BY PARSA FARJAM
#include <stdio.h>

int main() {
    int sum = 0;

    for(int number = 1; number < 1000; number++) {
        if(number % 3 == 0 || number % 5 == 0) {
            sum += number;
        }
    }
    
    printf("%d", sum);
    return 0;
}
