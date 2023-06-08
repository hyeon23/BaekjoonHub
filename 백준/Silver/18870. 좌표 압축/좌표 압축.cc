#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    vector<int> vec(N);

    for(int i = 0 ; i < N; ++i){
        cin >> vec[i];
    }
    
    vector<int> cvec(vec);

    sort(cvec.begin(), cvec.end());

    cvec.erase(unique(cvec.begin(), cvec.end()), cvec.end());

    for(int i = 0; i < N; ++i){
        auto iter = lower_bound(cvec.begin(), cvec.end(), vec[i]);
        
        cout << iter - cvec.begin() << ' ';
    }
    return 0;
}