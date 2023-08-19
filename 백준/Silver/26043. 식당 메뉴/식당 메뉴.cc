#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cmd, num, fav;
    vector<vector<int>> vec(3);
    queue<pair<int, int>> q;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> cmd;

        if(cmd == 1){//fav를 좋아하는 num이 줄섬
            cin >> num >> fav;
            q.push({num, fav});
        }
        else if(cmd == 2){//num이 시식
            cin >> fav;
            if(q.front().second == fav)
                vec[0].push_back(q.front().first);
            else
                vec[1].push_back(q.front().first);
            q.pop();
        }
    }

    while(!q.empty()){
        vec[2].push_back(q.front().first);
        q.pop();
    }

    for(int i = 0; i < vec.size(); ++i){
        sort(vec[i].begin(), vec[i].end());

        if(vec[i].empty()) cout << "None";
        else{
            for(int j = 0; j < vec[i].size(); ++j){
                cout << vec[i][j] << ' ';
            }
        }
        cout << '\n';
    }
}