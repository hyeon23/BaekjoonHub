#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> citations(n);

    for(int i = 0; i < n; ++i)
        cin >> citations[i];

    sort(citations.rbegin(), citations.rend());

    int h_index = 0;

    for(int i = 0; i < n; ++i){
        if(citations[i] >= i + 1) h_index = i + 1;
        else break;
    }

    cout << h_index << '\n';

    return 0;
}