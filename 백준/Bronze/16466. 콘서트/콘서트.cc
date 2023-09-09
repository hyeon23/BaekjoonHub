#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, tmp;
    cin >> N;
    vector<int> vec;
    for(int i = 0; i < N; ++i){
        cin >> tmp;
        vec.push_back(tmp);
    }
    sort(vec.begin(), vec.end());
    
    int start = 0;

    while(true){
        if(vec[start] != start + 1) break;
        start++;
    }
    cout << start + 1;
    return 0;
}