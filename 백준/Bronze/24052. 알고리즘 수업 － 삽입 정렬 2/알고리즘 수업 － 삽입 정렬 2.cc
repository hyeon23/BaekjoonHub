#include <bits/stdc++.h>
using namespace std;

int N, K;

bool insertion_sort(vector<int>& vec){
    int cnt = 0;
    for(int i = 1; i <= vec.size() - 1; ++i){
        int loc = i - 1;
        int newItem = vec[i];

        while(0 <= loc && newItem < vec[loc]){
            cnt++;
            vec[loc + 1] = vec[loc];
            loc--;
            if(cnt == K) return true;
        }

        if(loc + 1 != i){
            cnt++;
            vec[loc + 1] = newItem;
            if(cnt == K) return true;
        }
    }
    return false;
}

int main(){
    cin >> N >> K;
    vector<int> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    if(insertion_sort(vec)){
        for(int i = 0; i < N; ++i){
            cout << vec[i] << ' ';
        }
    }
    else{
        cout << -1;
    }
    

    return 0;
}