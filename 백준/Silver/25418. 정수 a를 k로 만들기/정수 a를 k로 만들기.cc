#include <bits/stdc++.h>
using namespace std;

struct Node{
    long long cur;
    long long target;
    long long level;
};

vector<bool> visited(1000001, false);

long long bfs(Node cur){
    queue<Node> q;

    visited[cur.cur] = true;
    q.push(cur);

    while(!q.empty()){
        Node fr = q.front();

        if(fr.cur == cur.target) { 
            return fr.level;
        }

        q.pop();

        Node nnode1 = {fr.cur+1, fr.target, fr.level+1};

        if(nnode1.cur <= 1000001 && !visited[nnode1.cur]) { 
            visited[nnode1.cur] = true;
            q.push(nnode1);
        }

        Node nnode2 = {fr.cur*2, fr.target, fr.level+1};

        if(nnode2.cur <= 1000001 && !visited[nnode2.cur]) {
            visited[nnode2.cur] = true;
            q.push(nnode2);
        }
    }

    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //K를 A로 만드는 횟수
    //10 -> 5 = 1

    long long K, A, cnt = 0;
    cin >> A >> K;

    cout << bfs({A, K, 0});

    return 0;
}