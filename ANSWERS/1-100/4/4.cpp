// PROJECT EULER PROBLEM 4 - SOLUTION BY PARSA FARJAM
#include <iostream>

using namespace std;

int is_palindrome(int x) {
    char stringized[6];
    sprintf(stringized, "%d", x);
    if (stringized[0] == stringized[5] && stringized[1] == stringized[4] && stringized[2] == stringized[3]) {
        return 1;
    }
    return 0;
}

int main() {
    int max_found = 2;

    // FOR THIS CODE, I MAKE THE (IN MY OPINION RATHER REASONABLE) ASSUMPTION THAT THE TWO NUMEBRS LEADING TO THE MAXIMUM PALINDROME ARE BOTH ABOVE 900
    for (int i = 999; i >= 900; i--) {
        for (int j = 999; j >= 900; j--) {
            if (is_palindrome(i*j) == 1 && i*j > max_found) {
                max_found = i*j;
            }
        }
    }

    cout << max_found << endl;
    
    return 0;
}
