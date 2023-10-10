#include <bits/stdc++.h>
using namespace std;

int N, one, two;

vector<vector<int>> vvec(101);
vector<int> visited(101, -1);

int dfs(int start, int to){
    stack<int> stk;

    visited[start] = 0;
    stk.push(start);

    int ans = -1;
    
    while(!stk.empty()){
        int cur = stk.top();

        stk.pop();
        
        for(int i = 0; i < vvec[cur].size(); ++i){
            int curNode = vvec[cur][i];
            if(visited[curNode] != -1) continue;
            visited[curNode] = visited[cur]+1;
            if(curNode == to) return visited[curNode];
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