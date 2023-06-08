#include <set>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, M, temp, count;
    cin >> N >> M;
    map<int, int> map;
    for(int i = 0; i < N; ++i){
        cin >> temp;
        map.insert({temp, 0});
    }
    for(int i = 0; i < M; ++i){
        cin >> temp;
        if(map.find(temp) != map.end()){
            ++count;
        }
    }
    cout << N + M - 2 * count;
}