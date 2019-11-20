#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
   int a,b,c;
   cin>>a>>b>>c;
   float average=(a+b+c)/3;
   float differ=2*(a+c)-3*b;
   cout<<average<<endl<<differ;
}
