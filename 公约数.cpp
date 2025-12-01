#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int a, b;
    cout << "请输入第一个正整数：";
    cin >> a;
    cout << "请输入第二个正整数：";
    cin >> b;
    int gcd_val = gcd(a, b);
    int lcm_val = (a / gcd_val) * b;
    cout << "最大公约数（GCD）：" << gcd_val << endl;
    cout << "最小公倍数（LCM）：" << lcm_val << endl;
    return 0;
}