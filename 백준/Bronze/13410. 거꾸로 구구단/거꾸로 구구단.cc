#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    vector<string> gugu;

    for(int i = 1; i <= K; ++i){
        gugu.push_back(to_string(N * i));
    }

    vector<int> Rgugu;

    for(int i = 0; i < gugu.size(); ++i){
        reverse(gugu[i].begin(), gugu[i].end());

        Rgugu.push_back(stoi(gugu[i]));
    }

    sort(Rgugu.begin(), Rgugu.end(), greater<int>());

    cout << Rgugu[0];

    return 0;
}