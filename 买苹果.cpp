#include<iostream>
using namespace std;
int main() {
	int i,sum = 0;
	int x=0;
		for (i = 2; i < 100; i *= 2)
		{
			sum = sum + i;
			++x;
		}
		float y = sum * 0.8 / x;
	cout<<y<<endl;
	return 0;
}