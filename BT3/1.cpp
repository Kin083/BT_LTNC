#include <iostream>
using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;
    int a[n], b[n]={0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
        if (b[a[i]] >= 2)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1) cout << "Yes";
    else cout << "No";
}
