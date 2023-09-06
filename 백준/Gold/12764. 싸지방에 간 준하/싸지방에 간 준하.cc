#include <bits/stdc++.h> 
using namespace std;
 
int n;
vector<pair<int, int>> v;
priority_queue<pair<int, int>> pq; // 사용자의 종료 시간, 사용한 자리  
priority_queue<int> left_seats; // 빈 자리
int answer[100001]; 
 
 
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    cin >> n;
    
    int s, e;
    for(int i=0; i<n; i++){
        cin >> s >> e;
        v.push_back({s, e});
    }
    
    sort(v.begin(), v.end());
    
    int seat = 0;
    
    for(int i=0; i<v.size(); i++){
        
        // 다음으로 들어오는 사용자의 시작 시간과 이용중인 사용자의 끝나는 시간을 비교
        // 다음 사용자가 들어오기 전에 끝난 사용자가 있으면, 자리 번호를 저장하고 pq에서 제거  
        while(!pq.empty()){
            if(abs(pq.top().first) <= v[i].first){
                left_seats.push(-pq.top().second);
                pq.pop();
            }
            else break;
        }
        
        // 빈 자리가 없을 때  
        if(left_seats.empty()){
            pq.push({-v[i].second, seat});
            answer[seat++]++;
        }
        // 빈 자리가 있을 때  
        else{
            int tmp_seat = -left_seats.top();
            pq.push({-v[i].second, tmp_seat});
            answer[tmp_seat]++;
            left_seats.pop();
        }
    }
    
    cout << seat << endl;
    for(int i=0; i<seat; i++)
        cout << answer[i] << " ";
        
}
