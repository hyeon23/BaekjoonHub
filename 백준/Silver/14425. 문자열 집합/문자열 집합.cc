#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    int N, M, count = 0;
    string s;
    cin >> N >> M;
    set<string> set;
    for(int i = 0; i < N; ++i){
        cin >> s;
        set.insert(s);
    }

    for(int i = 0; i < M; ++i){
        cin >> s;
        if(set.find(s) != set.end())
            count++;
    }
    cout << count;
}