// PROJECT EULER PROBLEM 2 - SOLUTION BY PARSA FARJAM
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // INITIALIZING THE SEQUENCE WITH THE FIRST TWO TERMS
    vector<int> sequence; 
    sequence = vector<int> (2);
    sequence[0] = 1;
    sequence[1] = 2;

    // SUM IS SET TO TWO AS WE WILL NOT BE ANALYZING 2
    int sum = 2;

    // 'sequence[sequence.size() - 1] + sequence[sequence.size() - 2]' IS THE NEXT TERM OF THE SEQUENCE
    while (sequence[sequence.size() - 1] + sequence[sequence.size() - 2] < 4000000) {
        
        // ADDS THE NEXT TERM TO THE SEQUENCE LIST
        sequence.push_back(sequence[sequence.size() - 1] + sequence[sequence.size() - 2]);

        // UPDATES SUM IF THE NEXT TERM IS PAIR. NOTE THAT 'sequence.size()' CHANGES BETWEEN THE LAST STEP AND THIS ONE AS WE ARE ADDING A NEW ELEMENT.
        if (sequence[sequence.size() - 1] % 2 == 0) {
            sum += sequence[sequence.size() - 1];
        }


    }

    cout << sum << endl;

    return 0;
}