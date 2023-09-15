#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> A, pair<int, int> B){
    return A.second < B.second;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i = 0; i < N; ++i) cin >> vec[i];
    sort(vec.begin(), vec.end());
    //1 5 7 9

    if(vec.size() % 2 == 0){//짝수
        int pos1 = vec[vec.size() / 2 - 1];
        int pos2 = vec[vec.size() / 2];

        int dist1 = 0, dist2 = 0;

        for(int i = 0; i < N; ++i){
            dist1 += abs(pos1 - vec[i]);
            dist2 += abs(pos2 - vec[i]);
        }

        if(dist1 <= dist2){
            cout << pos1;
        }
        else{
            cout << pos2;
        }
         
    }
    else{//홀수
        int pos1 = vec[vec.size() / 2];
        cout << pos1;
    }



    return 0;
}