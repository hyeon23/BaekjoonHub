#include <bits/stdc++.h>
using namespace std;

struct medal{
    int na;
    int gold;
    int silver;
    int bronze;
    int rank;
};

bool cmp(medal A, medal B){
    if(A.gold == B.gold){
        if(A.silver == B.silver){
            return A.bronze > B.bronze;
        }
        return A.silver > B.silver;
    }
    return A.gold > B.gold;
}

int main(){
    int N, K, na, go, si, br;
    cin >> N >> K;
    vector<medal> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> na >> go >> si >> br;
        vec.push_back({na, go, si, br, 0});
    }
    sort(vec.begin(), vec.end(), cmp);

    // 1 1 2 0 1
    // 2 0 1 0 2
    // 3 0 1 0 2
    // 4 0 0 1 3

    int rnk = 1;

    vec[0].rank = rnk;


    for(int i = 1; i < vec.size(); ++i){
        if(vec[i-1].gold == vec[i].gold && 
        vec[i-1].silver == vec[i].silver && 
        vec[i-1].bronze == vec[i].bronze){
            vec[i].rank = rnk;
        }
        else{
            rnk++;
        }
    }

    for(int i = 0; i < vec.size(); ++i){
        if(vec[i].na == K){
            cout << vec[i].rank;
            break;
        }
    }

    return 0;
}