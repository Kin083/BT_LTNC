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
void printf_reference(Point &p)
{
    cout << &p << endl;
}
void printf_value(Point p)
{
    cout << &p << endl;
}
int main()
{
    Point p(2,3);
    cout << &p << endl;
    printf_reference(p);
    printf_value(p);
}
