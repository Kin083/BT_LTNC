#include <iostream>
using namespace std;

int rnd(double x)
{
    int t = x;
    if (x - t >= 0.5) t++;
    return t;
}

int main()
{
    double x;
    cin >> x;
    cout << rnd(x);
}
