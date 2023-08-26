#include <bits/stdc++.h>
using namespace std;

//메모리 초과 & 시간초과 수정코드
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(true){
        int cnt2 = 0;
        unsigned long long A1, B1;
        map<unsigned long long, unsigned long long> collas1;
        cin >> A1 >> B1;

        if(A1 == 0 && B1 == 0) break;

        collas1[cnt2] = A1;

        while(A1 != 1){
            cnt2++;
            if(A1 % 2 == 0) A1 /= 2;
            else A1 = 3 * A1 + 1;
            collas1[cnt2] = A1;
        }
        unsigned long long cnt = 0;
        bool t = false;
        unsigned long long realB = B1;
        while(true){
            //비교
            for(unsigned long long i = 0; i < collas1.size(); ++i){
                if(collas1[i] == B1){
                    cout << collas1[0] << " needs " << i << " steps, " << realB << " needs " << cnt << " steps, they meet at " << collas1[i] << '\n';
                    t = true;
                    break;
                }
            }
            if(t) break;
            if(B1 % 2 == 0) B1 /= 2;
            else B1 = 3 * B1 + 1;
            cnt++;
        }
    }    
}