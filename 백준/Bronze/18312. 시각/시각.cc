#include<iostream>
#include<string>
using namespace std;
int n,k;
int cnt;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> k;
	string str;
	for (int i = 0; i <=n; i++) {
		for (int j = 0; j <= 59; j++) {
			for (int u = 0; u <= 59; u++) {
				if (i / 10 == 0) { // 한글자일경우 앞에 0을 붙여준다.
					str += "0";
				}
				str += to_string(i);
				if (j / 10 == 0) { // 한글자일경우 앞에 0을 붙여준다.
					str += "0";
				}
				str += to_string(j);
				if (u / 10 == 0) { // 한글자일경우 앞에 0을 붙여준다.
					str += "0";
				}
				str += to_string(u);
				
				if (str.find(to_string(k))!= -1) cnt++;
				str.clear();
			}
			
		}
	}
	cout << cnt;
}