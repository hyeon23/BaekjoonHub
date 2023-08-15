#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    stack<pair<int, int>> stk;
    cin >> N;
    int totalScore = 0;

    while (N--)
    {
        int one, two, thr;
        cin >> one;
        if (one == 1)
        {
            cin >> two >> thr;
            stk.push({two, thr});
        }
        
        if (!stk.empty()){
        
            stk.top().second--;

            if (stk.top().second == 0)
            {
                totalScore += stk.top().first;
                stk.pop();
            }
        }
    }
    cout << totalScore;
}