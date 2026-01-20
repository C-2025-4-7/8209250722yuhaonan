#include<iostream>
using namespace std;
int main() {
	int a[10];
	int A = 0;
	int num;
	for (int i = 0; i < 10; i++) {
		cin >> num;
		bool isa = false;
		for (int j = 0; j < A; j++) {
			if (a[j] == num) {
				isa = true;
				break;
			}
		}
		if (!isa) {
			a[A++] = num;
		}
	}cout << "Êý×ÖÎª£º";
	for (int i = 0; i < A; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
	return 0;
}