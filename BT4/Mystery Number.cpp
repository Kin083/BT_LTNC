#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n + 1; i++)
        cin >> b[i];
    for (int i = 0; i < n + 1; i++)
    {
        bool fl = false;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == -1) continue;
            if (b[i] == a[j])
            {
                b[i] = -1;
                a[j] = -1;
                fl = true;
                break;
            }
        }
        if (!fl)
        {
            cout << b[i];
            return 0;
        }
    }

    return 0;
}

