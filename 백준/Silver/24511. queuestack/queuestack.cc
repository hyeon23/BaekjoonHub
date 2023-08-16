#include <iostream>
#include <deque>
using namespace std;

deque<int> que;
bool arr[100000];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	for (int i = 0; i < N; i++) {
		int x; cin >> x;
		if (arr[i]) continue;
		que.push_back(x);
	}
    //1 2
    //4
	int M; cin >> M;
	while (M--) {
		int x; cin >> x;
		que.push_front(x);
		cout << que.back() << ' ';
		que.pop_back();
	}
}