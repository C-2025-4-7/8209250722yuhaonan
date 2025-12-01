#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double a, x, x_next;
    const double eps = 1e-6;

    cout << "请输入a的值：";
    cin >> a;

    x = a; // 初始值x₀ = a
    do {
        x_next = 0.5 * (x + a / x);
        if (fabs(x_next - x) < eps) { 
            break;
        }
        x = x_next;
    } while (true);

    cout << a << "的平方根为：" << x_next << endl;

    return 0;
}