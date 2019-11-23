#include <iostream>
#include <cmath>
using namespace std;
main ()
{
  int e, a[3], max, min;
  cin >> e;
  a[0] = e / 1000;
  a[1] = e / 100 % 10;
  a[2] = e % 100 / 10;
  a[3] = e % 10;
  max=0;min=0;
  for(int i=0; i<4; i++){
      if(a[i]<a[min])
      min=i;
      if(a[i]>a[max])
      max=i;
  }
swap(a[max],a[min]);
for(int i=0;i<4;i++)
cout<<a[i];
}
