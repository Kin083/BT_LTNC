#include <iostream>
using namespace std;
int minAr(int* a, int n) {
    int minAr = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < minAr) minAr = a[i];
    }
    return minAr;
}
int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    cout << minAr(a,n) * minAr(b,n);
}
