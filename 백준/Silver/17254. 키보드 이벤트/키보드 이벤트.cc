#include <bits/stdc++.h>
using namespace std;

struct abc{
    int a;
    int b;
    int c;
};

bool cmp(abc a1, abc a2){
    if(a1.b == a2.b){
        return a1.a < a2.a;
    }
    return a1.b < a2.b;
}

int main(){
    int N, M, a, b;
    char c;
    cin >> N >> M;
    vector<abc> vec;
    for(int i = 0 ; i < M; ++i){
        cin >> a >> b >> c;
        vec.push_back({a, b, c});
    }
    sort(vec.begin(), vec.end(), cmp);

    for(int i = 0; i < vec.size(); ++i){
        cout << (char)vec[i].c;
    }
}