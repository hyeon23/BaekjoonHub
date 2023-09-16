#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, M, start, end, tmp;
    cin >> N >> M;
    vector<int> dots(100001);//점 위치

    for(int i = 0; i < N; ++i) { 
        cin >> dots[i];
    }

    sort(dots.begin(), dots.end());

    for(int i = 0; i < M; ++i){
        cin >> start >> end;
        cout << upper_bound(dots.begin(), dots.end(), end) - lower_bound(dots.begin(), dots.end(), start) << "\n";
    }

    return 0;
}