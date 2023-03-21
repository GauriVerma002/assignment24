#include <iostream>
using namespace std;


int area(int a, int b)
{ 
    return a + b;
}

double area(double b, double c)
{ 
    return b+c;
}

int main()
{
    cout << area(2, 8) << endl;
    cout << area(2.0, 8.5) << endl;
}
