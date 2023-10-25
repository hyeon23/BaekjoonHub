#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int sum[n+1]; sum[0] = 0;
    int tmp;
    
    for(int i=1; i<= n; ++i){
        cin >> tmp;
        sum[i] = tmp + sum[i-1];
    }
    int max = INT_MIN;

    for(int i = k; i<= n; ++i){
        tmp = sum[i] - sum[i-k];
        if(max < tmp) max = tmp;
    }
    cout << max;
}