#include <iostream>
using namespace std;
int main()
{
   int k,a,z,k2,a2,z2;
   cin>>k>>a>>z>>k2>>a2>>z2;
   if (z<z2 || (z<=z2 && a<a2) || (z<=z2 && a<=a2 && k<k2)) 
   cout<<"yes";
   else cout<<"no";
    return 0;
}
