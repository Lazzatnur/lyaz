
#include <iostream>

using namespace std;

int main()
{
   int k,a,z;
   string s="no";
   cin>>k>>a>>z;
   if (z>=1000 && z<10000){
  while(a==2){
      if(k>29) s="yes";
      }while(((a%2==1 && a<=7) || (a%2==0 && a>7 )) && a<=12 && a!=2){
          if(k<=31) s="yes";}
          while(((a%2==0 && a<7) || (a%2==0 && a>8)) && a<=12 && a!=2){
          if(k<=30) s="yes";}
                }else s="no";
                cout<<s;
    return 0;
}
