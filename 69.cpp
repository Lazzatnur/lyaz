#include <iostream>
#include <cmath>
using namespace std;
main ()
{
  int a,b,c,p;
  cin>>a>>b>>c;
  p=(a+b+c)/2;
  if(a+b>c && a+c>b && b+c>a) cout<<"area = "<<sqrt(p*(p-a)*(p-b)*(p-c));
  else cout<<"triangle does not exist";
}
