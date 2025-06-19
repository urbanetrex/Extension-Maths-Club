#include <iostream>
#include <string>
#include <vector>
using namespace std;
string int3(int n){
    if(n<10) return " " + to_string(n) + " ";
    if(n<100) return " " + to_string(n);
    return to_string(n);
}
void out(vector<int> a){
    /*
    -------------------
    |      (   )      |
    |      /   \      |
    |  (   )   (   )  |
    |   /         \   |
    |(   )-(   )-(   )|
    -------------------
    */
    cout << "-------------------\n";
    cout << "|      (" << int3(a[0]) << ")      |\n";
    cout << "|      /   \\      |\n";
    cout << "|  (" << int3(a[1]) << ")   (" << int3(a[2]) << ")  |\n";
    cout << "|   /         \\   |\n";
    cout << "|(" << int3(a[3]) << ") - (" << int3(a[4]) << ") - (" << int3(a[5]) << ")|\n";
    cout << "-------------------\n";
}
int main(){
    int n;
    cin >> n;

    // out-of-range check
    if(n<0 || n>994){
        cout << "In this code, n should be in the range of [0, 994].\n";
        return 0;
    }

    // four possible paths
    vector<int> a1({n, n + 5, n + 4, n + 1, n + 3, n + 2, 3 * n + 6});
    vector<int> a2({n + 3, n + 2, n + 1, n + 4, n, n + 5, 3 * n + 9});
    vector<int> a3({n, n + 5, n + 3, n + 2, n + 1, n + 4, 3 * n + 8});
    vector<int> a4 = vector<int>{n + 1, n + 4, n + 2, n + 3, n, n + 5, 3 * n + 7};
    
    out(a1);
    return 0;
}