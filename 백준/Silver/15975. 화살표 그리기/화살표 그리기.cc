#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2){
    if(p1.first == p2.first){
        return p1.second < p2.second;
    }
    return p1.first < p2.first;
}

int main(){
    int N, x, c;

    cin >> N;

    if(N == 1){
        cout << 0;
        return 0;
    }

    vector<pair<int, int>> dc;

    for(int i = 0; i < N; ++i){
        cin >> x >> c;
        dc.push_back({c, x});
    }

    sort(dc.begin(), dc.end(), cmp);
    
    int dist = 0;

    for(int i = 0; i < dc.size(); ++i){

        if(i == 0){
            //뒤 확인
            if(dc[i].first == dc[i+1].first){
                dist += abs(dc[i+1].second - dc[i].second);
            }
        }
        else if(i == dc.size() - 1){
            //앞 확인
            if(dc[i].first == dc[i-1].first){
                dist += abs(dc[i].second - dc[i-1].second);
            }
        }
        else{
            //앞, 뒤 확인
            int dist1 = -1;
            int dist2 = -1;
            
            if(dc[i].first == dc[i+1].first){
                dist1 = abs(dc[i+1].second - dc[i].second);
            }

            if(dc[i].first == dc[i-1].first){
                dist2 = abs(dc[i].second - dc[i-1].second);
            }

            if(dist1 == -1 && dist2 == -1){
                dist += 0;
            }
            else if(dist1 != -1 && dist2 != -1){
                dist += min(dist1, dist2);
            }
            else if(dist1 == -1  && dist2 != -1){
                dist += dist2;
            }
            else if(dist2 == -1 && dist1 != -1){
                dist += dist1;
            }
        }
        

    }

    cout << dist;

    return 0;
}