#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, v;
	vector<int> vec;
	cin >> N;

	for (int i = 0; i < N; ++i) {
		int x;
		cin >> x;
		vec.push_back(x);
	}

	cin >> v;

	int vCount = 0;

	for (int i = 0; i < vec.size(); ++i) {
		if (v == vec[i])
			vCount++;
	}

	cout << vCount;
}