#include <iostream>
using namespace std;
int main()
{
   int a;// 12345
   cin>>a;
   if(a/10000%2==0) a=a-a/10000*10000;
   if(a/1000%10%2==0) a=a-(a/1000%10)*1000; 
   if(a%1000/100%2==0) a=a-(a%1000/100)*100; 
   if(a%100/10%2==0) a=a-(a%100/10)*10; 
   if(a%10%2==0) a=a-a%10;
cout<<a;
    return 0;}

