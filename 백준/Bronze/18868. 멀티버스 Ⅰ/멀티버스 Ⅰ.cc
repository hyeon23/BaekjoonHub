#include <bits/stdc++.h>
using namespace std;
 
#define size first
#define idx second
 
pair<int, int> u[101][10010];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int m, n; 
    cin >> m >> n;
    
    for(int i = 0; i < m; i++){
        for(int j = 0, size; j < n; j++){
            cin >> size;
            u[i][j] = {size, j};    // {행성의 크기, 정렬 전 인덱스}
        }
        sort(&u[i][0], &u[i][n]);   // 각 우주를 행성 크기를 기준으로 정렬
    }
 
    int ans = 0;    // 균등한 우주 쌍의 개수
 
    for(int i = 0; i < m - 1; i++){
        for(int j = i + 1; j < m; j++){ // 두 우주를 선택 (Combination)
            bool equal = true;  // 두 우주가 균등한지 나타내는 Flag 변수
            for(int k = 0; k < n; k++){
                if(u[i][k].idx != u[j][k].idx) {    // 정렬 전 위치가 같지 않다면
                    equal = false;  // 두 우주는 균등하지 않은 우주
                    break;
                }else{  // 정렬 전 위치가 같다면
                    if(i != n - 1){
                        if(u[i][k].size < u[i][k + 1].size != u[j][k].size < u[j][k + 1].size){ // 대소관계 비교
                            equal = false;
                            break;
                        }
                    }
                }
 
            }
            if(equal) ans++;
        }
    }
    cout << ans << "\n";
}