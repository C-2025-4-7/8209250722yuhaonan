#include<iostream>
using namespace std;
int main() {
	int x;
	int y;
	int z;
	cout << "输入三边的值：";
	cin >> x >> y >> z;
	if (x + y - z <= 0 || y + z - x <= 0 ||z + x - y <= 0)
		cout << "不是三角形" << endl;
	else if (x-y==0||x-z==0||y-z==0)
		cout << "是等腰三角形";
	else cout << "不是等腰三角形" << endl;
	return 0;
}