#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int nA, nB, tmp;
    set<int> A;
    set<int> B;
    vector<int> vec;

    cin >> nA >> nB;

    for(int i = 0; i < nA; ++i){
        cin >> tmp;
        A.insert(tmp);
    }

    for(int i = 0; i < nB; ++i){
        cin >> tmp;
        B.insert(tmp);
    }

    for(auto i : A){
        if(B.find(i) == B.end()) {
            vec.push_back(i);
        }
    }

    cout << vec.size() << '\n';

    for(auto i : vec)
        cout << i << ' ';
    return 0;
}