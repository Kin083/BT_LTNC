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
void printf(Point p)
{
    cout << '(' << p.x << ", " << p.y << ')' << endl;
}
int main()
{
    Point p(2,3);
    printf(p);
}
