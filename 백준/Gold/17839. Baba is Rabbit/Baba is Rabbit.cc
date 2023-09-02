#include <bits/stdc++.h>
using namespace std;

unordered_map<string, vector<string>> m;//parent, child
set<string> ans;
unordered_set<string> isvisited;

void recur(string stst){
    if(isvisited.find(stst) != isvisited.end()) return;
    
    ans.insert(stst);
    isvisited.insert(stst);

    for(int i = 0; i < m[stst].size(); ++i)
        recur(m[stst][i]);
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    string A, is, B;
    cin >> N;
    while(N--){
        cin >> A >> is >> B;
        m[A].push_back(B);
    }

    recur("Baba");
    for(auto i : ans) { 
        if(i != "Baba")cout << i << '\n';
    }
    return 0;
}