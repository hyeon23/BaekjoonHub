#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, float> A, pair<string, float> B){
    return A.second > B.second;
}

int main(){
    int tmp;
    string name;
    float tall;
    while(true){
        cin >> tmp;
        if(tmp == 0) break;

        vector<pair<string, float>> vec;
        for(int i = 0; i < tmp; ++i){
            cin >> name >> tall;
            vec.push_back({name, tall});
        }
        sort(vec.begin(), vec.end(), cmp);

        cout << vec[0].first << ' ';

        for(int i = 1; i < vec.size(); ++i){
            if(vec[i].second == vec[i-1].second){
                cout << vec[i].first << ' ';
            }
            else{
                break;
            }
        }
        cout << '\n';
    }
    return 0;
}