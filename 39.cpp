#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>m)
    cout<<"yes";
    else{
    swap(n,m);
    cout<<n<<endl<<m;}
}
