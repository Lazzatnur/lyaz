#include <iostream>
using namespace std;
int main ()
{
  float a,b,c,a1,c1,b1;
  cin>>a>>b>>c;
  a1=a;b1=b;c1=c;
  c=a+b+c;
  a=a+b;
  b=c1-a1;
cout<<a<<endl<<b<<endl<<c;
  return 0;
}
