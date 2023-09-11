#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> A, pair<int, int> B){
    if(A.first == B.first){
        A.second < B.second;
    }
    return A.first > B.first;
}

int main(){
    //우선순위 : 문제 개수 고 -> 패널티 저

    int N;
    cin >> N;
    vector<pair<int, int>> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i].first >> vec[i].second;
    }

    sort(vec.begin(), vec.end(), cmp);

    int cnt = 0;

    for(int i = 0; i < vec.size(); ++i){
        if(i >= 5){
            if(vec[i].first == vec[i-1].first){
                ++cnt;
            }
            else{
                break;
            }
        }
    }

    cout << cnt;

    return 0;
}