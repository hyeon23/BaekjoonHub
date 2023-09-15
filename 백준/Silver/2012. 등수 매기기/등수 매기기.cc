#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> A, pair<int, int> B){
    if(A.second == B.second)
        return A.first < B.first;
    return A.second < B.second;
}

int main(){
    int N, tmp;
    cin >> N;
    vector<pair<int, int>> bul(N);
    for(int i = 0; i < N; ++i){
        cin >> tmp;
        bul[i] = {i+1, tmp};
    }

    sort(bul.begin(), bul.end(), cmp);

    //1 2 3 4 5
    //1 5 3 1 2

    //1 4 5 3 2
    //1 1 2 3 5

    long long bulman = 0;

    for(int i = 0; i < N; ++i){
        bulman += abs(bul[i].second - (i+1));
    }

    cout << bulman;

    return 0;
}