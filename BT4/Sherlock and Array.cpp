#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        bool fl = false;
        int a[n], tong = 0, tong_trai = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            tong += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (tong_trai * 2 + a[i] == tong)
            {
                fl = true;
                break;
            }
            tong_trai += a[i];
        }
        if (fl) cout << "YES\n";
        else cout << "NO\n";
    }
}
