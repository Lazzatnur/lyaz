#include <iostream>
using namespace std;
int main () {
    for(int i = 1000; i < 9999; i++) {
        int f = i/1000;
        int s = (i - i/1000 * 1000) / 100;
        int t = ((i - i/1000 * 1000) - (i - i/1000 * 1000) / 100 * 100) / 10;
        int fo = i%10;
        if (f != 5 && f != 6 && f != 5 && s != 6 && s != 5 && t != 6) {
            cout << i << " ";
        }
    }
    return 0;
}
