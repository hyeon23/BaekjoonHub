#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> elem(M);

    int sum = 0;

    for(int i = 0; i < M; ++i){
        cin >> elem[i];
    }

    for(int i = 1; i <= N; ++i){
        bool t = false;
        for(int j = 0; j < M; ++j){
            if(i % elem[j] == 0){
                t = true;
                break;
            }
        }
        if(t){
            sum += i;
        }
    }
    
    cout << sum;
    return 0;
}