#include <iostream>
#include <cstring>
using namespace std;


int indexof(const char* s1, const char* s2) {

    if (s1 == nullptr || s2 == nullptr) return -1;
    int len1 = strlen(s1);
    int len2 = strlen(s2); 


    if (len2 > len1) return -1;

 
    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (s1[i + j] != s2[j]) {
                break;
            }
        }
        if (j == len2) { 
            return i;
        }
    }
    return -1;
}


int main() {
    char s1[100], s2[50];
    cout << "请输入原字符串s1：";
    cin >> s1;
    cout << "请输入子字符串s2：";
    cin >> s2;

    int pos = indexof(s1, s2);
    if (pos != -1) {
        cout << "子串首次出现的下标：" << pos << endl;
    }
    else {
        cout << "未找到子串，返回-1" << endl;
    }

    return 0;
}