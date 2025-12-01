#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int F;
	cout << "华氏度的数值：";
	cin >> F;
	float C =(F - 32) / 1.8;
	cout <<fixed<<setprecision(2)<< "摄氏度的数值：" << C<<endl;
	return 0;
}