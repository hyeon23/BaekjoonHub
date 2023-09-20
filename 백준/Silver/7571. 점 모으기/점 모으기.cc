#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> xs(M);
    vector<int> ys(M);

    for(int i = 0; i < M; ++i){
        cin >> xs[i] >> ys[i];
    }

    sort(xs.begin(), xs.end());
    sort(ys.begin(), ys.end());

    int xmid = xs[M / 2];
    int ymid = ys[M / 2];

    int sum = 0;

    for(int i = 0; i < M; ++i){
        sum += abs(xs[i] - xmid) + abs(ys[i] - ymid);
    }
    cout << sum;
    return 0;
}