#include <iostream>
using namespace std;
int
main ()
{
  int a,b,c,d,e;
  cin >> a;//1221
  b=a/1000; c=a/100%10; d=a%100/10; e=a%10;
  if(e<5 ) a=b*1000; 
   else if (d<5) a=d*1000; else if(c<5) a=c*1000; else a=b*1000;
  
  cout << a;
  return 0;
}
