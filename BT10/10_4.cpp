#include <iostream>
using namespace std;
struct Point
{
        double x, y;
    Point(double _x, double _y)
    {
        x = _x;
        y = _y;
    }
};
int main()
{
    Point p(2,3);
    cout << &p.x << endl << &p.y << endl << &p << endl; // &p.x = &p, &p.y = &p.x + 8;    ( 8 là số byte của double)
}

