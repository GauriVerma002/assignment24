#include <iostream>
using namespace std;
double area(int r)
{ // area of circle
    return 3.14 * r * r;
}

int area(int l, int b)
{ // area of rectancle
    return l * b;
}

double area(double b, double h)
{ // area of triangle
    return (b * h) / 2;
}

int main()
{
    cout << area(11) << endl;
    cout << area(2, 8) << endl;
    cout << area(2.0, 8.0) << endl;
}
