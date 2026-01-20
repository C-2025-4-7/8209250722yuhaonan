#include <iostream>
#include <cstring>
#include <cctype> 
using namespace std;

int parseHex(const char* const hexString) {
    if (hexString == nullptr) return 0;
    int result = 0;
    int len = strlen(hexString);
    for (int i = 0; i < len; i++) {
        char c = hexString[i];
        int val;
        if (isdigit(c)) {
            val = c - '0';
        }
        else if (c >= 'a' && c <= 'f') {
            val = 10 + (c - 'a');
        }
        else if (c >= 'A' && c <= 'F') {
            val = 10 + (c - 'A');
        }
        else {
            return 0;
        }
        result = result * 16 + val;
    }
    return result;
}
int main() {
    char hexStr[20];
    cout << "请输入十六进制字符串：";
    cin >> hexStr;

    int decNum = parseHex(hexStr);
    cout << "转换后的十进制数：" << decNum << endl;
 return 0;
}