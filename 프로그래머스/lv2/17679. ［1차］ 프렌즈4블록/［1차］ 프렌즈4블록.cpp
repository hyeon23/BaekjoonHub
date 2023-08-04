#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<string> board) {
    int answer = 0;

    while(1){
        bool isDone = true;
        vector<vector<bool>> check(m, vector<bool>(n, false));
        
        for(int i=0;i<m-1;i++){
            for(int j=0;j<n-1;j++){
                if(board[i][j] == 0) continue;
                if(board[i][j] == board[i][j+1]){
                    char target = board[i][j];
                    if((board[i+1][j] == target) && (board[i+1][j+1] == target)){
                        check[i][j] = true;
                        check[i][j+1] = true;
                        check[i+1][j] = true;
                        check[i+1][j+1] = true;
                        isDone = false;
                    }
                }
            }
        }

        if(isDone == true) break;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(check[i][j] == true){
                    answer++;

                    for(int k=i;k>0;k--){
                        board[k][j] = board[k-1][j];
                    }
                    board[0][j] = 0;
                }
            }
        }
    }

    return answer;
}