#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
    float x=3.6;
   if(sin(x)<0)
    cout<<pow(2.7182818284,x-2)-sin(x)-pow(x,4)*cos(1/x);
    else
    cout<<pow(2.7182818284,x-2)+sin(x)-pow(x,4)*cos(1/x);
    return 0;
}
