#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, v;
	cin >> N;
	int* a = new int[N];
	for (int i = 0; i < N; ++i) {
		cin >> a[i];
	}

	cin >> v;
	int count = 0;
	for (int i = 0; i < N; ++i) {
		if (a[i] == v) {
			count++;
		}
	}

	cout << count;

	return 0;
}