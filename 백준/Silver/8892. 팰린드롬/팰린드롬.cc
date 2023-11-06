#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool check_palindrome(string str) { 
	int len = str.length();
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - i - 1]) return false;
	}
	return true;
}

void solution() {
	
    //입력
	int word;
	cin >> word;
	vector<string>v;
	string tmp;

	for (int j = 0; j < word; j++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	
	for (int j = 0; j < word; j++) {
		for (int k = 0; k < word; k++) {
			if (j == k) continue;

			if (check_palindrome(v[j] + v[k])) {
				cout << v[j] + v[k] << '\n';
				return; 
			}
		}
	}

	cout << 0 << '\n';
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int test;
	cin >> test;

	for (int i = 0; i < test; i++) {
		solution();
	}
}