#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            cout << j << ' ';
        }
        for (int t = 1; t < i; t++) {
            cout << t << ' ';
        }
        cout << endl;
    }
}
