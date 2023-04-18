#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    while (x != y)
    {
        if (y > x) y -= x;
        else x -= y;
    }
    return x;
}

int main()
{
    int a, b;
    cin >> a >> b;
    if (gcd(a, b) == 1) cout << "2 so nguyen to cung nhau";
    else cout << "2 so khong nguyen to cung nhau";
}
