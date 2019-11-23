#include <iostream>
using namespace std;
int main () {
    int sum;
    for(int i=10; i>0; i--)
    {
        int j=i;
        sum=sum+i*j;
        while(j--){
            cout<<i<<' ';
        }
        cout<<endl;
    }
    cout<<sum;
    return 0;
}
