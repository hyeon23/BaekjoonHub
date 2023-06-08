#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, M;
    cin >> N;
    vector<int> vec1(N);
    for(int i = 0; i < N; ++i)
        cin >> vec1[i];
    cin >> M;
    vector<pair<int, int>> vec2;
    for(int i = 0; i < M; ++i){
        int x;
        cin >> x;
        vec2.push_back({x, 0});
    }
    sort(vec1.begin(), vec1.end());
    for(int i = 0; i < vec2.size(); ++i){
        if(binary_search(vec1.begin(), vec1.end(), vec2[i].first))
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    return 0;
}