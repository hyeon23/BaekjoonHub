#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long N;
    cin >> N;
    vector<long long> vec(N);
    for(long long i = 0; i < N; ++i){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());

    //3 4 6 8 9 12
    for(long long k = 0; k < N; ++k){
        vector<long long> ans;
        vector<long long> cvec(vec);

        long long cur = cvec[k];
        
        ans.push_back(cur);

        for(long long i = 1; i < N; ++i){
            long long x2 = cur * 2;
            long long n2 = -1;

            if(cur % 3 == 0){
                n2 = cur / 3;
            }

            if(n2 == -1){
                auto it = find(cvec.begin(), cvec.end(), x2);
                if(it != cvec.end()){
                    ans.push_back(x2);
                    cvec.erase(it);
                    cur = x2;
                    continue;
                }
            }
            else{

                auto it1 = find(cvec.begin(), cvec.end(), x2);
                if(it1 != cvec.end()){
                    ans.push_back(x2);
                    cvec.erase(it1);
                    cur = x2;
                    continue;
                }

                auto it2 = find(cvec.begin(), cvec.end(), n2);
                if(it2 != cvec.end()){
                    ans.push_back(n2);
                    cvec.erase(it2);
                    cur = n2;
                    continue;
                }
            }
        }

        if(ans.size() == N) { 
            for(long long i = 0; i < N; ++i){
                cout << ans[i] << ' ';
            }   
            return 0;     
        }
    }
    return 0;
}