#include <iostream>
using namespace std;

int add(int, int, int = 0);
int main()
{
    int a, b, c;
    cout << "Enter the two values for addition ";
    cin >> a >> b;
    cout << "addition is " << add(a, b);
    cout << endl;
    cout << "Enter the three values for addition ";
    cin >> a >> b >> c;
    cout << "addition is " << add(a, b, c);
    cout << endl;
    return 0;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
