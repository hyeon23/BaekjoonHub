#include <bits/stdc++.h>
using namespace std;

int H, W, answer = 0;

bool is_possible(int r, int c) {
	if ((r <= H && c <= W) || (r <= W && c <= H)) return 1;
	return 0;
}

int putSticker(int x1, int x2, int y1, int y2) {
	int x = x1 + x2;
	if (x <= W || x <= H) {
		if (x <= W) { // 모눈 종이가 0도
			if (y1 <= H && y2 <= H) return 1;
		}
		if (x <= H) { // 모눈 종이가 90도
			if (y1 <= W && y2 <= W) return 1;
		}
	}
	return 0;
}

int main(){
    cin >> H >> W;
    
    int N;
    cin >> N;
    
    vector<int> Rs(N);
    vector<int> Cs(N);

    for(int i = 0; i < N; ++i){
        cin >> Rs[i] >> Cs[i];
    }

    for(int i = 0; i < N; ++i){
        for(int j = i+1; j < N; ++j){
            //check(들어갈 수 있는지)
            int R1 = Rs[i];
			int C1 = Cs[i];
			int R2 = Rs[j];
			int C2 = Cs[j];

			// 선택된 스티커가 각각 모눈종이에 들어갈 수 있는지 확인
			if (!is_possible(R1, C1)) continue;
			if (!is_possible(R2, C2)) continue;

			// 스티커 2개를 모눈종이에 붙여 본다.
			if (putSticker(R1, R2, C1, C2)) { // 스티커가 각각 0도, 0도
				if (answer < R1 * C1 + R2 * C2) answer = R1 * C1 + R2 * C2;
				continue;
			}
			if (putSticker(R1, C2, C1, R2)) { // 스티커가 각각 0도, 90도
				if (answer < R1 * C1 + R2 * C2) answer = R1 * C1 + R2 * C2;
				continue;
			}
			if (putSticker(C1, C2, R1, R2)) { // 스티커가 각각 90도, 0도
				if (answer < R1 * C1 + R2 * C2) answer = R1 * C1 + R2 * C2;
				continue;
			}
			if (putSticker(R2, C1, C2, R1)) { // 스티커가 각각 90도, 90도
				if (answer < R1 * C1 + R2 * C2) answer = R1 * C1 + R2 * C2;
			}
        }
    }

    cout << answer;

    return 0;
}