#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, L;
    cin >> N;
    vector<int> levels;
    vector<int> stats = {1, 2, 3, 4, 5};

    int ans = 0;
    int cnt = 0;

    for(int i = 0; i < N; ++i){
        cin >> L;
        levels.push_back(L);
    }
    sort(levels.begin(), levels.end(), greater<int>());

    if(levels.size() >= 42){
        for(int i = 0; i < 42; ++i){
            ans += levels[i];

            if(levels[i] >= 250){
                cnt += 5;
            }
            else if(levels[i] >= 200){
                cnt += 4;
            }
            else if(levels[i] >= 140){
                cnt += 3;
            }
            else if(levels[i] >= 100){
                cnt += 2;
            }
            else if(levels[i] >= 60){
                cnt += 1;
            }            
        }
    }
    else{
        for(int i = 0; i < levels.size(); ++i){
            ans += levels[i];

            if(levels[i] >= 250){
                cnt += 5;
            }
            else if(levels[i] >= 200){
                cnt += 4;
            }
            else if(levels[i] >= 140){
                cnt += 3;
            }
            else if(levels[i] >= 100){
                cnt += 2;
            }
            else if(levels[i] >= 60){
                cnt += 1;
            }            
        }
    }

    cout << ans << ' '<< cnt;
    return 0;
}