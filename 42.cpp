#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a>=2 && a<=5) a=a+10;
    if(a>=7 && a<=40) a=a-100;
 if(a>=0 || a<=3000) a=a*3; else a=0;
    cout<<a;
}
