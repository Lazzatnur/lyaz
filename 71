#include <iostream>
using namespace std;
int main() {
    float h, m;
    cin >> h >> m;
    float angle = (h + m/60) * 30 - m * 6;
    if(h >= 0 && h <= 23 && m >= 0 && m <= 49) {
        if(angle >= 360) {
            cout << angle - 360;
        }
        else if(angle < 0) {
            cout << 360 + angle;
        }
    }
    else {
        cout << "error";
    }
    return 0;
}
