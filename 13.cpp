#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
    float a=0.1 ; 
    float b=0.2;int x=1;
    cout<<pow(x*x+b,1/5)-(b*b*pow(sin(x+a),3))/x;
    return 0;
}
