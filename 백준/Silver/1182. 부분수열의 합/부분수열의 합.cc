#include <bits/stdc++.h>
using namespace std;
int N, S, ans = 0;
vector<int> input;
vector<int> arr(21);
vector<bool> visited(21);
//합이 S가 되는 부분수열 개수
void DFS(int depth, int sum, int num){
    if(depth != 0){
        if(sum == S){
            ++ans;
        }
    }
    if(depth == N){
        return;
    }
    for(int i = num; i < N; ++i){
        if(!visited[i]){
            visited[i] = true;
            arr[depth] = input[i];
            DFS(depth+1, sum + input[i], i+1);
            visited[i] = false;
        }
    }
}
int main(){
    cin >> N >> S;
    for(int i = 0; i < N; ++i){
        int tmp;
        cin >> tmp;
        input.push_back(tmp);
    }
    sort(input.begin(), input.end());
    DFS(0, 0, 0);
    cout << ans;
    return 0;
}