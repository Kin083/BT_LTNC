#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	string s[num];
	for (int i = 0; i < num; i++) cin >> s[i];
	for (int i = 0; i < num - 1; i++)
	{
		int size1 = s[i].size();
		if (size1 % 2 == 0) continue;
		for (int j = i + 1; j < num; j++)
		{
			bool fl = true;
			int size2 = s[j].size();
			if (size2 != size1) continue;
			for (int m = 0; m < size1; m++)
			{
				if (s[i][m] != s[j][size2 - m - 1])
				{
					fl = false;
					break;
				}
			}
			if (fl == true)
            {
                cout << size1 << ' ' << s[i][size1 / 2];
                return 0;
			}

		}
	}
	//cout << "Input number is " << num << endl;	// Writing output to STDOUT
}
