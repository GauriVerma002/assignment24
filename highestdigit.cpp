#include <iostream>
using namespace std;
   void highest(int n)
  {
    int largest=0,smallest=9;
      while(n)
      {
      int r= n% 10;;
      largest= max(r,largest);
      smallest= min(r,smallest);
      n=n/10;
      }
      cout<<"largest= " <<largest<< " "<<"smallest= "<<smallest;
  }
  int main()
  {
    int x;
    cout<<"enter number to find the highest digit";
    cin>>x;
    highest(x);
    return 0;
  }
