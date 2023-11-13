#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dx[8]={0,0,1,-1,1,1,-1,-1};
int dy[8]={1,-1,0,0,-1,1,-1,1};
int n,m;
int board[51][51];
int dist[51][51];
bool vis[51][51];
int ans;
void bfs(int x,int y){
	queue<pair<int,int>> q;
	q.push({x,y});
	vis[x][y]=true;
	while(!q.empty()){
		auto cur = q.front(); q.pop();
		for(int dir=0;dir<8;dir++){
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if(nx<0||nx>=n||ny<0||ny>=m) continue;
			if(vis[nx][ny]) continue;
			vis[nx][ny]=true;
			dist[nx][ny]=dist[cur.X][cur.Y]+1;
			if(board[nx][ny]==1){
				ans=max(ans,dist[nx][ny]);
				return;
			}
			q.push({nx,ny});
		}
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>board[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(board[i][j]==1) continue; //상어칸은 안전거리가 0
			
			for(int k=0;k<50;k++){ //초기화
				fill(vis[k],vis[k]+50,0);
				fill(dist[k],dist[k]+50,0);
			}
			bfs(i,j);
			
		}
	}
	cout<<ans;
}