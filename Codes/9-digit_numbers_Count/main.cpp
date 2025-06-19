#include <iostream>
#include <vector>

using namespace std;

const int newline_count = 18;
int counter = newline_count;

inline void recursive_call_count (int pos, vector<int> digits, int sumPrev, int &count) {
    if (pos == 8) {
        count++;
        digits[8] = 9 - sumPrev; // Set the last digit to make the sum 9
        for (int i = 0; i < 9; i++) {
            cout << digits[i];
        }
        if (--counter == 0) {
            cout << endl;
            counter = newline_count; // Reset counter
        } else {
            cout << " ";
        }
        return;
    }
    
    for (int i = 0; i <= 9 - sumPrev; i++) {
        if (i == 0 && pos == 0) continue; // Skip leading zero
        if (sumPrev + i > 9) continue; // Skip if sum exceeds
        digits[pos] = i;
        recursive_call_count(pos + 1, digits, sumPrev + i, count);
    }
}

int main() {
    cout << "9-digit numbers with digits summing to 9." << endl;
    cout << "Printing " << newline_count << " numbers per line:" << endl;

    vector<int> digits(9, 0);
    int count = 0;
    
    recursive_call_count(0, digits, 0, count);
    cout << "Total: " << count << ", printed lines:" << count / newline_count << endl;

    return 0;
}