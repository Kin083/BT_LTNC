#include <iostream>
using namespace std;
bool check_string(int n)
{
    string s = to_string(n);
    int size = s.size();
    for (int i = 0; i < size / 2; i++)
    {
        if (s[i] != s[size - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int dem = 0;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            if (check_string(j) == 1) dem++;
        }
        cout << dem << endl;
    }
}

