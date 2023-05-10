#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    double avg, total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    avg = total / n;
    int _max = a[0], _min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > _max) _max = a[i];
        if (a[i] < _min) _min = a[i];
    }
    cout << "Mean: " << avg << endl;
    cout << "Max: " << _max << endl;
    cout << "Min: " << _min << endl;
}
