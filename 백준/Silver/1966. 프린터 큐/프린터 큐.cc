#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // 우선순위 큐
    int T, N, M, x, cnt = 0;

    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        queue<pair<int, int>> queue; //{i, x}
        vector<int> vec;
        cnt = 0;
        cin >> N >> M;

        for (int j = 0; j < N; ++j)
        {
            cin >> x;
            queue.push({j, x});
            vec.push_back(x);
        }

        sort(vec.begin(), vec.end(), greater<int>());

        while (true)
        {
            if (queue.front().second == vec[0])
            {
                cnt++;

                if (queue.front().first == M)
                {
                    cout << cnt << '\n';
                    break;
                }

                queue.pop();
                vec.erase(vec.begin());
            }
            else
            {
                queue.push(queue.front());
                queue.pop();
            }
        }
    }
}