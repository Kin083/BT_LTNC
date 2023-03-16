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
Point mid_point(const Point p1, const Point p2)
{
    Point p_mid((p1.x + p2.x) / 2, (p1.y + p2.y) / 2);
    return p_mid;
}
void printf(Point p)
{
    cout << '(' << p.x << ", " << p.y << ')' << endl;
}
int main()
{
    Point p1(2,3), p2(4,6);
    Point p3 = mid_point(p1, p2);
    printf(p3);
}

