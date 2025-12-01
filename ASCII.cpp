#include <iostream>
using namespace std; 
int main() {
    char c; 
    cout << "请输入一个字符：";
    cin >> c; 
    if (c >= 'a' && c <= 'z') {
        char upper_c = c - 32;
        cout << "转换后：" << upper_c << endl;}
    else {
        int next_ascii = static_cast<int>(c) + 1;
        cout << "后继字符的ASCII值：" << next_ascii << endl;}
return 0; 
}