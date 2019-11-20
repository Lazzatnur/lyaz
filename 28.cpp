#include <iostream>
using namespace std;
int main ()
{
  float sum,per;
  cin>>sum>>per;
  for(int i=0;i<5;i++){
      sum=sum*(1+per);
  }
cout<<sum;
  return 0;
}


or 
#include <iostream>
using namespace std;
int main ()
{
  float sum,per;
  cin>>sum>>per;
      sum=sum+5*sum*per;
cout<<sum;
  return 0;
}
