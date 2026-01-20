#include<iostream>
using namespace std;
void sort(double list[], int listSize) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize-1; j++)
			if (list[j] > list[j + 1])
			{
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} while (changed);
}
int main() {
	const int SIZE = 10;
	double list[SIZE];
	cout << "输入十个数：";
	for (int i = 0; i < SIZE; i++) {
		cin >> list[i];
	}
	sort(list, SIZE);
	cout << "结果：";
	for (int i = 0; i < SIZE; i++) {
		cout << list[i] << "\t";
	}
	cout << endl;
	return 0;
}