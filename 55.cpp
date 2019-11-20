#include <iostream>
using namespace std;
int main()
{
   int a, b[3];
   for(int i=0; i<3; i++){
       cin>>b[i];
       if (b[i]>=0)
       a+=1;
   }
  cout<<a;
    return 0;
}
