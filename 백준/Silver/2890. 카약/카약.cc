#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> A, pair<int, int> B){
    return A.first < B.first;
}

bool cmp2(pair<int, int> A, pair<int, int> B){
    return A.second > B.second;
}

int main(){
    int R, C;
    cin >> R >> C;
    string str;
    vector<pair<int, int>> vec;
    for(int i = 0; i < R; ++i){
        cin >> str;
        string tmp = str.substr(1, C-2);

        int rnk = 0;

        for(int j = 0; j < tmp.size(); ++j){
            if(tmp[j] != '.'){//숫자를 만나면
                vec.push_back({tmp[j] - '0', rnk});
                break;
            }
            else{//.을 만나면
                ++rnk;
            }
        }
    }

    sort(vec.begin(), vec.end(), cmp2);

    int rnk = 1;

    vector<pair<int, int>> pvec;

    pvec.push_back({vec[0].first, rnk});

    for(int i = 1; i < vec.size(); ++i){
        if(vec[i-1].second == vec[i].second){
            pvec.push_back({vec[i].first, rnk});
        }
        else{
            pvec.push_back({vec[i].first, ++rnk});
        }
    }

    sort(pvec.begin(), pvec.end(), cmp);

    for(int i = 0; i < pvec.size(); ++i){
        cout << pvec[i].second << '\n';
    }

    return 0;
}