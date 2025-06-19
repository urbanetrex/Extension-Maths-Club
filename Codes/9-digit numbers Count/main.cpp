#include <iostream>
#include <vector>

using namespace std;

void recursive_call_count (int pos, vector<int> digits, int sumPrev, int &count) {
    if (pos == 8) {
        count++;
        return;
    }
    
    for (int i = 1; i <= 9 - sumPrev; i++) {
        digits[pos] = i;
        recursive_call_count(pos + 1, digits, sumPrev + i, count);
    }
}

int main() {
    vector<int> digits(9, 0);
    int count = 0;
    
    recursive_call_count(0, digits, 0, count);
    cout << "Total: " << count << endl;

    return 0;
}