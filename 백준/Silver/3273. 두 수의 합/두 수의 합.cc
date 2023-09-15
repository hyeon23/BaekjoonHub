#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n;
    vector<int> vec(n);

    for(int i = 0; i < n; ++i) cin >> vec[i];
    sort(vec.begin(), vec.end());

    int start = 0;
    int end = vec.size()-1;
    int ans = 0;

    cin >> x;

    while(start < end){
        if(vec[start] + vec[end] == x){
            ++ans;
            --end;
        }
        else if(vec[start] + vec[end] < x) ++start;
        else --end;
    }
    cout << ans;
}