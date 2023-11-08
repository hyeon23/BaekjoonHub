#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int N, M, ans = 0;
    cin >> N >> M;

    vector<vector<bool>> isForbidden(N, vector<bool>(N, false));

    for(int i = 0; i < M; ++i){
        int x, y;
        cin >> x >> y;

        // Mark pairs of ice creams as forbidden
        isForbidden[x - 1][y - 1] = true;
        isForbidden[y - 1][x - 1] = true;
    }

    // Try all combinations of 3 ice creams
    for(int i = 0; i < N; ++i){
        for(int j = i + 1; j < N; ++j){
            for(int k = j + 1; k < N; ++k){
                // Check if the combination is not forbidden
                if (!isForbidden[i][j] && !isForbidden[i][k] && !isForbidden[j][k]) {
                    ++ans;
                }
            }
        }
    }

    cout << ans;

    return 0;
}