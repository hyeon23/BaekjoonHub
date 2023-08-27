#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> A, pair<string, int> B){
    return A.second < B.second;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;

    map<string, int> m;//이름, 시간

    //주의 개수
    while(N--){
        //4교대
        string str;
        for(int i = 0; i < 4; ++i){
            for(int j = 0; j < 7; ++j){
                cin >> str;
                if(str != "-"){
                    if(i == 0) m[str] += 4;
                    else if(i == 1) m[str] += 6;
                    else if(i == 2) m[str] += 4;
                    else if(i == 3) m[str] += 10;
                }
            }
        }
    }
    
    vector<pair<string, int>> vec(m.begin(), m.end());

    if(vec.empty()){
        cout << "Yes";
    }
    else{
        sort(vec.begin(), vec.end(), cmp);
        int maxe = vec[vec.size()-1].second;
        int mine = vec[0].second;
        if(maxe - mine <= 12) cout << "Yes";
        else cout << "No";
    }
}