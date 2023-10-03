#include <bits/stdc++.h>
#define MAX 1000001

using namespace std;


string p;
int k;
vector<bool> prime(MAX, true);

void eratoss(){
    prime[0] = false;
    prime[1] = false;

    for(int i = 2; i*i <= MAX; ++i){
        if(!prime[i]) continue;

        for(int j = i+i; j <= MAX; j += i){
            prime[j] = false;
        }
    }
}


int main(){
    cin >> p >> k;
    eratoss();
    int ans = 0x3f3f3f3f;
    for(int i = 2; i <= k; i++){
        int ret = 0;
        if(!prime[i]) continue;
        for(int j = 0; j < p.size(); j++)
            ret = (ret * 10 + p[j] - '0') % i;
        if(!ret) { ans = i; break;}
    }
    if(ans < k) cout << "BAD" << ' ' << ans;
    else cout << "GOOD";
}