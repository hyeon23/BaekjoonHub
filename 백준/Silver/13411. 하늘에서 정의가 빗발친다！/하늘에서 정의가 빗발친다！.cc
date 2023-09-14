#include <bits/stdc++.h>
using namespace std;

struct target{
    int num;
    double dist;
};

bool cmp(target t1, target t2){
    if(t1.dist == t2.dist){
        return t1.num < t2.num;
    }
    return t1.dist < t2.dist;
}

int main(){
    int N, x, y, v;
    cin >> N;
    vector<target> vec;
    for(int i = 0; i < N; ++i){
        cin >> x >> y >> v;
        vec.push_back({i+1, sqrt(x * x + y * y) / (double)v});
    }

    sort(vec.begin(), vec.end(), cmp);

    for(int i = 0; i < vec.size(); ++i){
        cout << vec[i].num << '\n';
    }

    return 0;
}