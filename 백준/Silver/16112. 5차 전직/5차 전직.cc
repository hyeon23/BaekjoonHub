#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long long n, k;

    cin >> n >> k;

    vector<long long> quests(n);

    for(long long i = 0; i < n; ++i){
        cin >> quests[i];
    }

    sort(quests.begin(), quests.end());

    long long curArchine = 0;

    long long max = 0;

    for(long long i = 0; i < quests.size(); ++i){
        max += quests[i] * curArchine;

        if(curArchine < k) curArchine++;
    }

    cout << max;

    return 0;
}