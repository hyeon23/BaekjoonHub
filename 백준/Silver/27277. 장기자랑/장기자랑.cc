#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2){
    return p1.first > p2.first;
}

int main(){
    int N;
    cin >> N;
    vector<int> vec(N+1);
    for(int i = 1; i <= N; ++i){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());

    int start = 0;
    int end = vec.size() - 1;

    vector<pair<int, int>> pvec;

    while(start < end){
        pvec.push_back({vec[start], vec[end]});
        start++;
        end--;
    }

    int mid = vec[start];//홀수일 경우 중간 값

    sort(pvec.begin(), pvec.end(), cmp);

    int sum = 0;

    //1 2 3 4 5 6

    //1 6 2 5 3 4

    //3 4 2 5 1 6

    //3 + 1 + 3 + 4 = 

    vector<int> cpy;

    if(vec.size() % 2 == 1) cpy.push_back(mid);

    for(int i = 0; i < pvec.size(); ++i){
        cpy.push_back(pvec[i].second);
        cpy.push_back(pvec[i].first);
    }

    sum = cpy[0];

    for(int i = 1; i < cpy.size(); ++i){
        sum += max(0, cpy[i] - cpy[i-1]);
    }
    cout << sum;
    return 0;
}