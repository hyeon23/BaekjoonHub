#include <bits/stdc++.h>
using namespace std;

vector<int> sums(81, 0);

int main(){
    int S1, S2, S3;
    cin >> S1 >> S2 >> S3;

    for(int s1 = 1; s1 <= S1; ++s1){
        for(int s2 = 1; s2 <= S2; ++s2){
            for(int s3 = 1; s3 <= S3; ++s3){
                sums[s1+s2+s3]++;
            }
        }
    }

    int m = -1, ans = 0;

    for(int i = 1; i <= 80; ++i){
        if(m < sums[i]){
            m = sums[i];
            ans = i;
        }
    }

    cout << ans;

    return 0;
}