//Next Permutation 해결법
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, ansMax = -2147000000, ansMin = 2147000000;
    cin >> n;
    int a[n];
    vector<int> op;

    for(int i = 0; i < n; ++i)
        cin >> a[i];

    for(int i = 0; i < 4; ++i){
        int tmp;
        cin >> tmp;
        while(tmp--)
            op.push_back(i);
    }

    sort(op.begin(), op.end());

    do{
        int idx= 0;
        int sum = a[0];
        //연산자의 수는 항상 숫자의 수보다 1 적다.
        for(int i = 0; i < n - 1; ++i){
            if(op[i] == 0)
                sum += a[++idx];
            else if(op[i] == 1)
                sum -= a[++idx];
            else if(op[i] == 2)
                sum *= a[++idx];
            else if(op[i] == 3)
                sum /= a[++idx];
        }

        ansMax = max(ansMax, sum);
        ansMin = min(ansMin, sum);
    } while(next_permutation(op.begin(), op.end()));

    cout << ansMax << '\n' << ansMin;
}