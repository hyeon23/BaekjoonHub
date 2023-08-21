#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> dq;
	int N; cin >> N;
	dq.push_back(N);
	for (int i = N - 1; i > 0; i--) {
		dq.push_front(i);
		for (int j = 0; j < i; j++) {
			dq.push_front(dq.back());
			dq.pop_back();
		}
	}

	while (!dq.empty()) {
		cout << dq.front() << ' ';
		dq.pop_front();
	}
}