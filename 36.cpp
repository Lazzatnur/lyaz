#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string m;
    switch(n){
        case 1:
        m="january";
        break;
        case 2:
        m="february";
        break;
        case 3:
        m="march";
        break;
        case 4:
        m="april";
        break;
        case 5:
        m="may";
        break;
        case 6:
        m="june";
        break;
        case 7:
        m="july";
        break;
        case 8:
        m="august";
        break;
        case 9:
        m="september";
        break;
        case 10:
        m="october";
        break;
        case 11:
        m="november";
        break;
        case 12:
        m="december";
        break;
    }
    cout<<m;
}
