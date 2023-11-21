#include <bits/stdc++.h>
using namespace std;

int N;
int Map[14];
int cnt = 0;
int s = 0;

vector<bool> measure;

void dfs(int count, int weight){
    if(count == N + 1){
        if(weight > 0) measure[weight] = true;
        return;
    }
    dfs(count+1, weight);
    dfs(count+1, weight+Map[count]);
    dfs(count+1, weight-Map[count]);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N;

    for(int i = 1; i <= N; ++i) {
        cin >> Map[i];
        s += Map[i];
    }
    measure.resize(s+1, false);
    dfs(1, 0);
    for(int i = 1; i <= s; ++i){
        if(!measure[i]) ++cnt;
    }
    cout << cnt << '\n';
}