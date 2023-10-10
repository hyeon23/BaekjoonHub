#include <bits/stdc++.h>
using namespace std;

int N, one, two;

vector<vector<int>> vvec(101);
vector<bool> dist(101, false);
vector<int> level(101, 0);

int dfs(int start, int to){
    stack<int> stk;

    dist[start] = true;
    stk.push(start);

    level[start] = 0;

    int ans = -1;
    
    while(!stk.empty()){
        int cur = stk.top();

        stk.pop();
        
        for(int i = 0; i < vvec[cur].size(); ++i){
            int curNode = vvec[cur][i];
            if(dist[curNode] == true) continue;
            
            level[curNode] = level[cur]+1;

            if(curNode == to) return level[curNode];

            dist[curNode] = true;
            
            stk.push(curNode);
        }
    }

    return ans;
}

int main(){
    cin >> N >> one >> two;

    int M, x, y;

    cin >> M;
    for(int i = 0; i < M; ++i){
        cin >> x >> y;
        vvec[x].push_back(y);
        vvec[y].push_back(x);
    }

    cout << dfs(one, two);

    return 0;
}