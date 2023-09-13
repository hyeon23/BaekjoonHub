#include <bits/stdc++.h>
using namespace std;

int main(){
    ///8시 -> 입구(커피받음) -> 자리로 감
    int N;
    cin >> N;
    vector<int> tips(N);
    for(int i = 0; i < N; ++i){
        cin >> tips[i];
    }

    sort(tips.rbegin(), tips.rend());

    long long sum = 0;

    for(int i = 0; i < tips.size(); ++i){
        sum += (tips[i] - i) <= 0 ? 0 : (tips[i] - i);
    }

    cout << sum;

    return 0;
}