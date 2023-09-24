#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long N, tmp;
    cin >> N;
    vector<long long> vec;
    for(long long i = 0; i < N; ++i){
        cin >> tmp;
        vec.push_back(tmp);
    }
    
    sort(vec.begin(), vec.end());

    int start = 0;
    int end = vec.size()-1;

    int min = 2000000000;

    pair<long long, long long> ans;

    while(start < end){
        long long sum = vec[start] + vec[end];
        if(min > abs(sum)){
            min = abs(sum);
            ans.first = vec[start];
            ans.second = vec[end];

            if(sum == 0) break;
        }

        if(sum < 0) ++start;
        else --end;
    }

    cout << ans.first << ' ' << ans.second;

    return 0;
}