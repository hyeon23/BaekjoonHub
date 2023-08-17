#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int n; cin >> n;
	stack<int>st1, st2;
	for (int i = 0; i < n; i++) {
		int tmp; cin >> tmp;
		st1.push(tmp);
	}
	vector<pair<int, int> >ans;
	
	int idx = n; //3번 장대로 옮겨야할 원판 idx
	
	bool flag = true; //true : st1, false : st2 차례
 
	while (idx > 0) {
		if (flag) {
			while (!st1.empty()) {
				if (st1.top() == idx) {
					ans.push_back({ 1, 3 });
					st1.pop();
					idx--;
				}
				else {
					ans.push_back({ 1, 2 });
					st2.push(st1.top());
					st1.pop();
				}
			}
			flag = false;
		}
		else {
			while (!st2.empty()) {
				if (st2.top() == idx) {
					ans.push_back({ 2, 3 });
					st2.pop();
					idx--;
				}
				else {
					ans.push_back({ 2, 1 });
					st1.push(st2.top());
					st2.pop();
				}
			}
			flag = true;
		}
	}
	cout << ans.size() << "\n";
	for (int i = 0; i < ans.size(); i++) cout << ans[i].first << " " << ans[i].second << "\n";
	return 0;
}