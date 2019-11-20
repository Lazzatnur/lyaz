#include <iostream>
using namespace std;
int main()
{
   int a;
   cin>>a;
   if(a/1000>a/100%10 && a/100%10> a%100/10 && a%100/10>a%10 ) cout<<"da";
   else cout<<"net";
    return 0;
}
