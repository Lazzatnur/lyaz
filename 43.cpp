#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string m;
    if(n==3 || n==4 || n==5) m="spring";
    if(n==6 || n==7 || n==8) m="summer";
    if(n==9 || n==10 || n==11) m="autunm";
    if(n==1 || n==12 || n==2)   m="winter";
    cout<<m;
}
