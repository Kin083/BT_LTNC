#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int x = rand() % 49;
        a[i] = x;
    }
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int t = j + 1; t < n; t++)
            {
                if ((a[i] + a[j] + a[t]) % 25 == 0) cout << a[i] << ' ' << a[j] << ' ' << a[t] << endl;
            }
}
