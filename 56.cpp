#include <iostream>
using namespace std;
int main()
{
   int napr;
   int com;
   cin>>napr>>com;
   if(napr>10 && napr<15 && com<=1 && com>=-1){
   if((napr==11 && com==0) || (napr==14 && com==1) || (napr==12 && com==-1)) 
  cout<<"sever";
  if((napr==12 && com==0) || (napr==13 && com==-1) || (napr==11 && com==1))
  cout<<"zapad";
  if((napr==13 && com==0) || (napr==14 && com==-1) || (napr==12 && com==1))
  cout<<"ug";
  if ((napr==14 && com==0) || (napr==13 && com==1) || (napr==11 && com==-1))
  cout<<"vostok";}
  else cout<<"error";
 
    return 0;
}
