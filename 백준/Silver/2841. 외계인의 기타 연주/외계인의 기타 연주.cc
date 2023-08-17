#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int N, P, line, tarp, ans = 0;
    cin >> N >> P;

    vector<stack<int>> stkvec(6);
    while (N--)
    {
        cin >> line >> tarp;

        if (stkvec[line - 1].empty())
        {
            stkvec[line - 1].push(tarp);
            ++ans;
        }
        else
        {
            if (stkvec[line - 1].top() == tarp)
            {
                continue;
            }
            else if (stkvec[line - 1].top() > tarp)
            {
                while (!stkvec[line - 1].empty())
                {
                    if(stkvec[line - 1].top() < tarp){
                        stkvec[line - 1].push(tarp);
                        ++ans;
                        break;
                    }
                    else if(stkvec[line - 1].top() > tarp){
                        stkvec[line - 1].pop();
                        ++ans;
                    }
                    else if(stkvec[line - 1].top() == tarp){
                        break;
                    }
                }

                if(stkvec[line - 1].empty()) {
                    stkvec[line - 1].push(tarp);
                    ++ans;
                }
            }
            else if (stkvec[line - 1].top() < tarp)
            {
                stkvec[line - 1].push(tarp);
                ++ans;
            }
        }
    }

    cout << ans;
}