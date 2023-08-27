#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T, N, M, tmp;
    cin >> T;
    set<int> book;
    while(T--){
        cin >> N;
        book.clear();
        for(int i = 0; i < N; ++i){
            cin >> tmp;
            book.insert(tmp);
        }
        cin >> M;
        for(int i = 0; i < M; ++i){
            cin >> tmp;
            if(book.find(tmp) != book.end()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
    }
}