#include <iostream>
using namespace std;
int main()
{
   int a;
   cin>>a;
   if(a%10%2==0 || a%100/10%2==0 ||a%1000/100%2==0 || a/1000%10%2==0 || a/10000 )
   cout<<"yes";
   else cout<<"no";
    return 0;
}
