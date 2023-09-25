#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    
    cin >> N;
    vector<int> cranes(N);
    for(int i = 0; i < N; ++i) cin >> cranes[i];
    
    cin >> M;
    vector<int> boxes(M);
    for(int i = 0; i < M; ++i) cin >> boxes[i];

    sort(cranes.begin(), cranes.end(), greater<int>());
    sort(boxes.begin(), boxes.end(), greater<int>());

    if(cranes[0] < boxes[0]){
        cout << -1;
        return 0;
    }

    int cnt = 0;
    while(!boxes.empty()){
        cnt++;
        for(int i = 0; i < cranes.size(); ++i){
            for(int j = 0; j < boxes.size(); ++j){
                if(cranes[i] >= boxes[j]){
                    boxes.erase(boxes.begin() + j, boxes.begin() + j + 1);
                    break;
                }
            }
        }
    }
    cout << cnt;    
    return 0;
}