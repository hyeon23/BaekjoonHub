#include <map>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    map<string, int> map;
    cin >> N;
    for(int i = 0; i < N; ++i){
        string file;
        cin >> file;
        string cpp = file.substr(file.find('.') + 1);
        map[cpp]++;
    }

    for(auto i : map){
        cout << i.first << ' ' << i.second << '\n';
    }
}