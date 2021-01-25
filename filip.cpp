#include <iostream>
using namespace std;
int main() {
  int a1,a2,i;
  int r1 = 0;
  int r = 0;
  cin >> a1;
  cin >> a2;
  if(a1 != a2)
  {
     for(i = 0;i<3;i++)
     {
       int x,y;
       x=a1%10;//734//4
       y=a1/10;//73
       r=r*10+x;
       a1 = y;
     }
     for(i = 0;i<3;i++)
     {
       int x,y;
       x=a2%10;//734//4
       y=a2/10;//73
       r1=r1*10+x;
       a2 = y;
     }
     if(r>r1)
     cout<<r;
     else 
     cout<<r1;
  }
}