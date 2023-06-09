#include <iostream>
#include <math.h>
using namespace std;
bool CheckIsPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i <= (int)sqrt(n); i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (CheckIsPrime(i)) cout << i << ' ';
    }
}
