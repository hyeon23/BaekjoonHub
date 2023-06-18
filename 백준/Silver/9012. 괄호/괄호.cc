#include <stack>
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        string tmp;

        stack<char> stk;

        cin >> tmp;

        for (int i = 0; i < tmp.size(); ++i)
        {
            if (tmp[i] == '(')
            {
                stk.push(tmp[i]);
            }
            else if (tmp[i] == ')')
            {
                if (!stk.empty())
                {
                    if(stk.top() == '(')
                        stk.pop();
                }
                else{
                    stk.push(tmp[i]);
                }
            }

            if (i == tmp.size() - 1)
            {
                if (stk.empty())
                    cout << "YES" << '\n';
                else
                    cout << "NO" << '\n';
            }
        }
    }
}