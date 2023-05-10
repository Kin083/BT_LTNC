#include <iostream>
using namespace std;

char* weird_string() {
   char c[] = "123345";
   return c;
}

int main()
{
    char* p = weird_string();
    cout << p;      // p ko co gi ca?
}

/*
B1.
*p3 = 'B', p3 = 0x5678;
*p3 = 'A', p3 = 0x1234;
*p1 = 'B', p1 = 0x1234;


