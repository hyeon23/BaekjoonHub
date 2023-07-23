#include <cmath>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n, 0));
    int curx = n - 1, cury = 0, mode = 0;
    
    for(int i = 0; i < n; ++i)
        answer[0][i] = i + 1;
    
    int curval = n;
    
    for(int i = n - 1; i >= 1; --i){
        for(int k = 0; k < 2; ++k){
            for(int j = 0; j < i; ++j){
                if(mode % 4 == 0)
                    answer[++cury][curx] = ++curval;
                else if(mode % 4 == 1)
                    answer[cury][--curx] = ++curval;
                else if(mode % 4 == 2)
                    answer[--cury][curx] = ++curval;
                else if(mode % 4 == 3)
                    answer[cury][++curx] = ++curval;
            }
            mode++;   
        } 
    }
    return answer;
}