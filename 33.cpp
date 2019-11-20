#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c,max=0;
    cin >>a>>b;
    if (sqrt(b)>=0 && a-sqrt(b)>=0){
        c=sqrt(a-sqrt(b));
    }
    cout <<c;
}
