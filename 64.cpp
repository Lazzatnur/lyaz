#include <iostream>
using namespace std;
int main()
{
   int a;
   cin>>a; //1221
   if (a/1000==a%10 && a/100%10==a%100/10) cout<<"Yes";
   else cout<<"No";
    return 0;
}
