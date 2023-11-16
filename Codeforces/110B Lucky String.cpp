#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char a[] = {'a', 'b', 'c', 'd'};
    for (int i = 0; i < n; ++i) {
        cout << a[i % 4];
    }
    return 0;
}
