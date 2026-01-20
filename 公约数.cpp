#include<iostream>
using namespace std;
void p(int m, int n, int& gcd, int& lcm) {
	int a = m,b = n;
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	gcd = a;
	lcm = (m * n) / gcd;
}
int main() {
	int m, n;
		cout << "输入两个自然数" << endl;
		cin >> m >> n;
		int gcd, lcm;
		p(m, n, gcd, lcm);
		cout << "最大公约数：" << gcd <<endl;
		cout << "最小公倍数：" << lcm << endl;
		return 0;
}