#include <iostream>
using namespace std;

void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout << a << " " << b << " ";
}

int main()
{
    int a,b;
    cout << "Enter the two values to swap them ";
    cin >> a>>b;
    swap(a,b);
    return 0;
}
