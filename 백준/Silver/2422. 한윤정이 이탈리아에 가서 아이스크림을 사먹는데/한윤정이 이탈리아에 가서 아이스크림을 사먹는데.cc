#include <iostream>
using namespace std;

int N, M;
bool check[205][205];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N >> M;
    for(int i = 0; i < M; ++i){
        int p, q;
        cin >> p >> q;
        check[p][q] = check[q][p] = true;
    }
    int ans = 0;
    for(int i = 1; i <= N; ++i){
        for(int j = i+1; j <= N; ++j){
            if(check[i][j]) continue;

            for(int k = j+1; k <= N; ++k){
                if(check[i][k] || check[j][k]) continue;
                ++ans;
            }
        }
    }
    cout << ans << '\n';
}