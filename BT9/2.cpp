#include <iostream>
using namespace std;
int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    *p2 = 100;  // đã delete p, nên khi đó ô nhớ được p2 trỏ tới đã là null
    cout << *p2;
    delete p2;
}


