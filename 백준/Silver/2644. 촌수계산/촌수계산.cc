#include <bits/stdc++.h>
using namespace std;

int N, one, two;

vector<vector<int>> vvec(101);
vector<bool> dist(101, false);
vector<int> level(101, 0);

int dfs(int start, int to){
    queue<int> que;

    dist[start] = true;
    que.push(start);

    level[start] = 0;

    int ans = -1;
    
    while(!que.empty()){
        int cur = que.front();

        que.pop();
        
        for(int i = 0; i < vvec[cur].size(); ++i){
            int curNode = vvec[cur][i];
            if(dist[curNode] == true) continue;
            
            level[curNode] = level[cur]+1;

            if(curNode == to) return level[curNode];

            dist[curNode] = true;
            
            que.push(curNode);
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

    //1: 2, 3
    //2: 1, 7, 8, 9
    //3: 1
    //4: 5, 6
    //5: 4
    //6: 4
    //7: 2
    //8: 2
    //9: 2

    //에지를 통해 갈 수 없다면 -1 출력
    //에지를 통해 x번에 갈 수 있다면 x 출력

    cout << dfs(one, two);

    return 0;
}