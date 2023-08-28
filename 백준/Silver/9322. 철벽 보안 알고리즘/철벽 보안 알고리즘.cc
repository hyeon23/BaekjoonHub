#include <bits/stdc++.h>
using namespace std;

struct tmpS{
    int A;
    int B;
    string mapping;
};

bool cmp(pair<string, tmpS> A, pair<string, tmpS> B){
    return A.second.B < B.second.B;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        string tmp;
        map<string, tmpS> m;
        cin >> n;
        vector<string> start(n);
        //제 1 공개 키
        for(int i = 0; i < n; ++i){
            cin >> tmp;
            m[tmp].B = i;
            /*
            0 A
            1 B
            2 C
            3 D
            */
        }
        //제 2 공개 키
        for(int i = 0; i < n; ++i){
            cin >> tmp;
            m[tmp].A = i;
            start[i] = tmp;
        }
        //암호문
        for(int i = 0; i < n; ++i){
            cin >> tmp;
            m[start[i]].mapping = tmp;
        }

        vector<pair<string, tmpS>> vec(m.begin(), m.end());

        sort(vec.begin(), vec.end(), cmp);

        for(int i = 0; i < vec.size(); ++i){
            cout << vec[i].second.mapping << ' ';
        }
        cout << '\n';
    }
}