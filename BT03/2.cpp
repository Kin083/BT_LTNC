#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int size = s.size();
    for (int i = 0; i < size / 2; i++)
    {
        if (s[i] != s[size - i - 1])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
