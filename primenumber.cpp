#include <iostream>
using namespace std;
int main()
{
    int x;
    bool isprime = true;
    cout << "enter the number to find prime or not : "; 
    cin >> x;
    if(x == 0 ||x == 1)
    {
        isprime = false;
    }
    
    for (int i = 2; i <= x / 2; ++i)
    {
        if (x % i == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime)
        cout << "Number is Prime" << endl;
    else
        cout << "Number is not Prime" << endl;
    return 0;
}
