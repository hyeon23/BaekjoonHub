#include <bits/stdc++.h>
#define MBTI_CNT 16
using namespace std;
int getDist(string a, string b, string c) {
	int dist = 0;
	for (int i = 0; i < a.size(); i++) {
		dist += (a[i] != b[i]) + (b[i] != c[i]) + (c[i] != a[i]);
	}
	return dist;
}

int solve(int N, vector<string> mbtis) {
	if (N > MBTI_CNT * 2)
		return 0;

	int answer = 1e9;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				answer = min(answer, getDist(mbtis[i], mbtis[j], mbtis[k]));
			}
		}
	}
	return answer;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		
		vector<string> mbtis(N);
		for (int i = 0; i < N; i++) 
			cin >> mbtis[i];

		printf("%d\n", solve(N, mbtis));
	}
	return 0;
}