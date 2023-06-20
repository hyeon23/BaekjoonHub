#include <deque>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

// sol1: mysol -> 시간초과
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // AC 언어
    // 두 함수 R & D 지원
    // R: 배열의 수의 순서를 뒤집기
    // D: 배열의 첫번째 수를 버리기(배열이 빈 경우 사용시 에러)

    // 함수는 조합 가능
    // RDD -> 뒤집기 + 처음 두 수를 버리기

    int T, size;
    string funcs, arrString;

    cin >> T;

    for (int t = 0; t < T; ++t)
    {
        deque<string> dq;
        bool reverseTrigger = false;
        cin >> funcs;
        cin >> size;
        cin >> arrString;

        string tmp = "";

        for (int i = 0; i < arrString.size(); ++i)
        {

            if (arrString[i] == ',' || arrString[i] == ']')
            {
                if (tmp != "")
                {
                    dq.push_back(tmp);
                    tmp = "";
                }
            }
            else if (arrString[i] == '[')
                tmp = "";
            else
                tmp += arrString[i];
        }

        for (int i = 0; i < funcs.size(); ++i)
        {
            if (funcs[i] == 'R'){
                // tip2: 뒤집지 않고 거꾸로 읽기
                reverseTrigger = reverseTrigger ? false : true;
                
                // tip1: 뒤집기
                // reverse(dq.begin(), dq.end());
            }
            else if (funcs[i] == 'D')
            {
                if(dq.empty()){
                    cout << "error" << '\n';
                    break;
                }

                if (reverseTrigger)
                {
                    dq.pop_back();
                }
                else
                {
                    dq.pop_front();
                }
            }

            if (i == funcs.size() - 1)
            {
                cout << '[';
                if (reverseTrigger)
                {
                    for (int i = dq.size() - 1; i >= 0; --i)
                    {
                        if (i == 0)
                            cout << dq[i];
                        else
                            cout << dq[i] << ',';
                    }
                }
                else
                {
                    for (int i = 0; i < dq.size(); ++i)
                    {
                        if (i == dq.size() - 1)
                            cout << dq[i];
                        else
                            cout << dq[i] << ',';
                    }
                }
                cout << ']' << '\n';
            }
        }
    }
}