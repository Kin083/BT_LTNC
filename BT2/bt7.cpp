#include <iostream>
using namespace std;
int main() {
    int n, x = -1;
    while (cin >> n) {
        if (n == -1) {
            cout << n;
            return 0;
        }
        if (x == n) continue;
        cout << n << ' ';
        x = n;
    }
}
