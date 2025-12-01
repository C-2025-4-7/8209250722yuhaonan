#include<iostream>
#define P 3.14159
using namespace std;
int main() {
	double h, r;
	cout << "圆锥的高：";
	cin >> h;
	cout << "圆锥的半径：";
	cin >> r;
	int V=h*r*r*P/3;
	cout << "圆锥的体积：" << V << endl;
	return 0;
}