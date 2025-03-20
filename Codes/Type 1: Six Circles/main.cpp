#include <iostream>
#include <vector>
using namespace std;
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
}
int main(){
    int n;
    cin >> n;
    vector<int> a1(n), a2(n), a3(n), a4(n);
    a1={n, n+5, n+4, n+1, n+3, n+2, n+n+n+6};
    a2={n+3, n+2, n+1, n+4, n, n+5, n+n+n+9};
    a3={n, n+5, n+3, n+2, n+1, n+4, n+n+n+8};
    a4={n+1, n+4, n+2, n+3, n, n+5, n+n+n+7};
    return 0;
}