#include <bits/stdc++.h>
using namespace std;

int N, K;

int insertion_sort(vector<int>& vec){
    int cnt = 0;
    for(int i = 1; i <= vec.size() - 1; ++i){
        int loc = i - 1;
        int newItem = vec[i];

        while(0 <= loc && newItem < vec[loc]){
            cnt++;
            if(cnt == K) return vec[loc];
            vec[loc + 1] = vec[loc];
            loc--;
        }

        if(loc + 1 != i){
            cnt++;
            if(cnt == K) return newItem;
            vec[loc + 1] = newItem;
        }
    }
    return -1;
}

int main(){
    cin >> N >> K;
    vector<int> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    cout << insertion_sort(vec);
    return 0;
}