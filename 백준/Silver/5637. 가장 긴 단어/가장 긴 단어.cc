#include <bits/stdc++.h>
using namespace std;

// 17 + 26 = 43
// 49 + 26 = 75

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string maxStr;

	while (1) {
        
        // cin은 공백, \n 등을 포함하지 않고 s에 저장함
		string s; cin >> s;
		
        // 종료 조건인 E-N-D가 나오면 종료
		if (s == "E-N-D")
			break;
        
        // 현재 입력받은 문자열의 길이를 세기 위한 변수
		int curCount = 0;
		string tmp = "";
        
        // a-Z와 '-' 만을 문자로 인식할 것임. 
		for (int i = 0; i < s.length(); i++) {
			if (((s[i] - '0') > 48 && (s[i] - '0') < 76) || s[i] == '-') {
				curCount++;
				tmp += s[i];
			}
			else if (((s[i] - '0') > 16 && (s[i] - '0') < 44) || s[i] == '-') {
				curCount++;
				tmp += tolower(s[i]);
			}
		}
        // 다른 특수 문자들 ( ~ , . + )을 제외한 문자의 숫자를 세주고, 기존 max의 문자열과 비교하여 삽입 
        // 지금 카운팅해본 문자열이 기존 문자열보다 짧다면 tmp는 버리고 기존 maxStr을 보존한다
		if (curCount > maxStr.length()) {
			maxStr = tmp;
		}
	}

	cout << maxStr;


}