#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main() {
    string tmp;
    stack<char> stk;
    
    getline(cin, tmp);

    bool inTag = false; // 태그 안에 있는지 여부를 나타내는 플래그
    string str = "";

    for (int i = 0; i < tmp.size(); ++i) {
        if (tmp[i] == '<') {
            if (str != "") {
                reverse(str.begin(), str.end());
                cout << str;
                str = "";
            }
            inTag = true; // 태그 안에 진입
            cout << '<';
        }
        else if (tmp[i] == '>') {
            inTag = false; // 태그에서 나옴
            cout << '>';
        }
        else if (inTag) {
            cout << tmp[i]; // 태그 안에 있는 단어 그대로 출력
        }
        else if (tmp[i] == ' ') {
            reverse(str.begin(), str.end());
            cout << str << ' ';
            str = "";
        }
        else {
            str += tmp[i];
        }
    }

    if (str != "") {
        reverse(str.begin(), str.end());
        cout << str;
    }
}