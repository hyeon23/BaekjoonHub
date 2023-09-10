#include <bits/stdc++.h>
using namespace std;

struct man{
    int nnum;
    int snum;
    int grade;
};

bool cmp(man A, man B){
    if(A.grade == B.grade){

    }
    return A.grade > B.grade;
}

int main(){
    //학생 성적 순서대로 금, 은 동 수여(동점자 X, 나라별 메달 최대 두개)
    int N, nnum, snum, grade;
    cin >> N;

    vector<man> vec;

    for(int i = 0; i < N; ++i){
        cin >> nnum >> snum >> grade;
        vec.push_back({nnum, snum, grade});
    }

    sort(vec.begin(), vec.end(), cmp);

    vector<int> v;

    map<int, int> m;

    vector<pair<int, int>> pv;

    for(int i = 0; i < vec.size(); ++i){
        if(pv.size() >= 3) break;

        if(m[vec[i].nnum] < 2){
            m[vec[i].nnum]++;
            pv.push_back({vec[i].nnum, vec[i].snum});
        }
    }

    for(int i = 0; i < pv.size(); ++i){
        cout << pv[i].first << ' ' << pv[i].second << '\n';
    }
}