#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, M, tmp, cnt = 0;
    cin >> T;
    for(int i = 1; i <= T; ++i){
        priority_queue<int, vector<int>, less<>> pq1;//최대 힙
        priority_queue<int, vector<int>, greater<>> pq2;//최소 힙
        cin >> M;
        vector<int> vec;
        for(int j = 1; j <= M; ++j){
            cin >> tmp;
            
            if(pq1.size() == pq2.size()) pq1.push(tmp);
            else pq2.push(tmp);

            //swap!
            if(!pq1.empty() && !pq2.empty() && pq1.top() > pq2.top()){
                int t1 = pq1.top();
                int t2 = pq2.top();

                pq1.pop();
                pq2.pop();

                pq1.push(t2);
                pq2.push(t1);
            }

            if(j % 2 != 0){//홀수번째 순서
                cnt++;
                vec.push_back(pq1.top());
            }
        }
        cout << vec.size() << '\n';
        for(int i = 0; i < vec.size(); ++i){
            cout << vec[i] << ' ';

            if((i + 1) % 10 == 0){
                cout << '\n';
            }
        }
        cout << '\n';
    }
}
