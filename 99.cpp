#include <iostream>
using namespace std;
int main () {
    for(int i = 1000; i < 9999; i++) {
        int f = i/1000;
        int s = (i - i/1000 * 1000) / 100;
        int t = ((i - i/1000 * 1000) - (i - i/1000 * 1000) / 100 * 100) / 10;
        int fo = i%10;
        if (f != s && f != t && f != fo && s != t && s != fo && t != fo) {
            cout << i << " ";
        }
    }
    return 0;
}
