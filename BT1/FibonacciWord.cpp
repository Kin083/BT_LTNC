#include <iostream>
using namespace std;
int main() {
    string f[11];
    f[0] = "a";
    f[1] = "b";
    for (int i = 2; i <= 10; i++) {
        f[i] = f[i-2] + f[i-1];
    }
    for (int i = 0; i <= 10; i++) cout << f[i] << endl;
}
