#include <bits/stdc++.h>
using namespace std;

bool cmp(string A, string B){
    if(A.size() == B.size()){
        int asum = 0;
        int bsum = 0;

        for(int i = 0; i < A.size(); ++i){
            if(isdigit(A[i])){
                asum += (A[i] - '0');
            }
        }

        for(int i = 0; i < B.size(); ++i){
            if(isdigit(B[i])){
                bsum += (B[i] - '0');
            }
        }

        if(asum == bsum){
            return A < B;
        }
        return asum < bsum;
    }
    return A.size() < B.size();
}

int main(){
    int N;
    cin >> N;
    vector<string> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end(), cmp);

    for(int i = 0; i < N; ++i){
        cout << vec[i] << '\n';
    }

    return 0;
}