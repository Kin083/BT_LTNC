#include <iostream>
using namespace std;
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    bool b = true;
    if (!(x < y && y < z || x > y && y > z)) b = false;
    cout << b;
}
