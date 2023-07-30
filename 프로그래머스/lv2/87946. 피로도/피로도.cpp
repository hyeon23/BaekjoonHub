#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int ans = 0;
vector<int>visited(50);

int BFS(int explore_cnt, int curr_point, vector<vector<int>>& dungeons){
    for(int i=0; i<dungeons.size(); i++){
        if(curr_point >= dungeons[i][0]){
            if(!visited[i]){
                visited[i]=1;
                ans = max(ans, BFS(explore_cnt+1, curr_point - dungeons[i][1], dungeons));
                visited[i]=0;
            }
        }
    }
    return explore_cnt;
}

int solution(int k, vector<vector<int>> dungeons) {
    BFS(0,k,dungeons);
    
    return ans;
}