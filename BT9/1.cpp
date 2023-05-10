#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char* s1= "I Love ";
    const char* s2 = "You";
    int size1 = strlen(s1);
    int size2 = strlen(s2);
    int size = size1 + size2;
    char* s = new char[size];
    strcpy(s, s1);
    strcat(s, s2);
    cout << s << endl;
    return 0;
}
