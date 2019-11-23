#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double d = 10;
    for(int i = 2; i <= 10; i++) {
        d = d + d * 0.1;
        cout << d << endl;
    }
    return 0;
}
