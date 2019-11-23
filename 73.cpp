#include <bits/stdc++.h>
using namespace std;
int main(){
	int x1, x2, y1, y2, a1, a2, b1, b2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> a1 >> b1;
	cin >> a2 >> b2 ;
	if  (x1>=x2 && y1>=y2 && x1+a1<=x2+a2 && y1+b1<=y2+b2){
		cout << "All points of first rectangle belong to second rectangle";
	} else {cout << "Not all points of one rectangle belong to other rectangle";
	}
	if ((x1>=x2 && y1>=y2 && x1+a1<=x2+a2 && y1+b1<=y2+b2 ) || (x2>=x1 && y2>=y1 && x2+a2<=x1+a1 && y2+b2<=y1+b1)){
		cout << "All points of one rectangle belong to other rectangle";
	} else {cout << "Not all points of one rectangle belong to other rectangle";
	}
	if ((x1<=x2 && x2<=x1+a1 && y1<=y2 && y2<=y1+b1) ){
	cout<<"Rectangles are intersecting";
	} else {cout<<"Rectangles does not intersecting";}
}
