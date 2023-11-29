#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K, s, y;
    cin >> N >> K;
    vector<int> mvec(1001, 0);
    vector<int> fvec(1001, 0);
    for(int i = 0; i < N; ++i){
        cin >> s >> y;
        if(s == 1) mvec[y]++;
        else if(s == 0) fvec[y]++;
    }

    int room = 0;

    for(auto h : mvec){
        room += (h / K);
        if(h % K != 0) room += 1;
    }

    for(auto h : fvec){
        room += (h / K);
        if(h % K != 0) room += 1;
    }
    
    cout << room;
    return 0;
}