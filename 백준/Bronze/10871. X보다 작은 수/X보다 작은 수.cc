#include <iostream>
#include <vector>

using namespace std;

int main() {

	//sol1
	int N, v;
	cin >> N >> v;
	int* a = new int[N];

	for (int i = 0; i < N; ++i) {
		cin >> a[i];
	}

	for (int i = 0; i < N; ++i) {
		if (a[i] < v)
			cout << a[i] << " ";
	}
	return 0;
}