#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> wscore(10);
    vector<int> kscore(10);
    for(int i = 0; i < 10; ++i)
        cin >> wscore[i];
    for(int i = 0; i < 10; ++i)
        cin >> kscore[i];
    sort(wscore.begin(), wscore.end(), greater<int>());
    sort(kscore.begin(), kscore.end(), greater<int>());
    cout << wscore[0] + wscore[1] + wscore[2] << ' ' << kscore[0] + kscore[1] + kscore[2];
    return 0;
}