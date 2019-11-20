#include <iostream>
using namespace std;
int main()
{
    string a[100][100];
    int b;
    
    for(int i=0; i<4; i++){
        for(int j=0;j<13; j++){
            if(i==j || i+j==6 || j==i+6 || i+j==12)
            cout<<"*";
                else
            cout<<" ";
        }cout<<endl;
    }
    return 0;
}
