#include <set>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;
//sol1: set으로 줄이고 줄여도 안됨 ㅈㄹ한다.
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, M, temp, count = 0;
    cin >> N >> M;
    set<int> set1;
    for(int i = 0; i < N; ++i){
        cin >> temp;
        set1.insert(temp);
    }
    for(int i = 0; i < M; ++i){
        cin >> temp;
        if(set1.find(temp) != set1.end()){
            ++count;
        }
    }
    cout << N + M - 2 * count;
}