#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M, B;

	cin >> N >> M >> B;

	int arr[N][M];
	
	int mn = INT_MAX;
	int mx = INT_MIN;

	for(int i = 0; i < N; ++i){
		for(int j = 0; j < M; ++j){
			cin >> arr[i][j];
			mn = min(mn, arr[i][j]);
			mx = max(mx, arr[i][j]);
		}
	}

	int anst = INT_MAX;
	int ansh = -1;

	for(int i = mn; i <= mx; ++i){//제일 낮은 층수 to 제일 높은 층수
		long long t = 0;
		int add = 0;
		int sub = 0;

		for(int j = 0; j < N; ++j){
			for(int k = 0; k < M; ++k){
				int block = i - arr[j][k];

				if(block < 0) sub += abs(block);
				else add += block;
			}
		}

		if(add <= sub + B){
			t = add + sub * 2;
			if(t <= anst){
				anst = t;
				ansh = i;
			}
		}
	}

	cout << anst << " " << ansh;

	return 0;
}