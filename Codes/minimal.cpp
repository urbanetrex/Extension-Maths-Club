#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Simple initialization with a vector
    vector<int> a4 = {n + 1, n + 4, n + 2, n + 3, n, n + 5, 3 * n + 7};

    // Output to check
    for (int i : a4) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
