#include <unordered_map>
#include <sstream>
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, M;
    cin >> N >> M;
    unordered_map<string, int> map;
    string str;
    for(int i = 0; i < N; ++i){
        cin >> str;
        map[str] = 0;       
    }
    int ret = N;
    stringstream ss;
    for(int i = 0; i < M; ++i){
        cin >> str;
        ss.clear();
        ss.str(str);
        while(getline(ss, str, ','))
            map.erase(str);
        cout << map.size() << '\n';
    }
    return 0;
}
