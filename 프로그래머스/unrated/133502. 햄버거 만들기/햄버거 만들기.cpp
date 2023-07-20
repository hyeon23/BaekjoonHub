#include <stack>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    
    int answer = 0;
    stack<int> burger;
    
    //빵 야채 고기 빵
    for(int i = 0; i < ingredient.size(); ++i){
        burger.push(ingredient[i]);
        
        if(burger.size() >= 4){
            int t4 = burger.top();
            burger.pop();
            int t3 = burger.top();
            burger.pop();
            int t2 = burger.top();
            burger.pop();
            int t1 = burger.top();
            burger.pop();
                
            if(t1 == 1 && t2 == 2 && t3 == 3 && t4 == 1)
                answer++;
            else{
                burger.push(t1);
                burger.push(t2);
                burger.push(t3);
                burger.push(t4);
            }
        }
    }
    return answer;
}