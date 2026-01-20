#include<iostream>
#include<iomanip>
using namespace std;
bool prime(int num) {
	if (num < 2)
		return false;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int count=0;
	int num = 2;
	cout << "Ç°200¸öËØÊý£º" << endl;
	while (count < 200) {
		if (prime(num)) {
			cout << setw(5) << num;
			count++;
				if (count % 10 == 0) {
					cout << endl;
				}
		}
		num++;
	}
	return 0;
}