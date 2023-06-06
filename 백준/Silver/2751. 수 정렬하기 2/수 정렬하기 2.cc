#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i = 0; i < N; ++i)
        cin >> vec[i];
    sort(vec.begin(), vec.end());
    for(int i = 0; i < N; ++i){
        cout << vec[i] << '\n';
    }
}