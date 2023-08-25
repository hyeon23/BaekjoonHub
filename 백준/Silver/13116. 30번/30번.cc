#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--){
        int A, B;
        vector<int> vec1;
        vector<int> vec2;

        cin >> A >> B;

        while(A > 0){
            vec1.push_back(A);
            A /= 2;
        }

        while(B > 0){
            vec2.push_back(B);
            B /= 2;
        }

        int spos1 = 0;
        int spos2 = 0;

        //9 4 2 1
        //15 7 3 1

        while(true){
            if(vec1[spos1] < vec2[spos2]){
                ++spos2;
            }
            else if(vec1[spos1] > vec2[spos2]){
                ++spos1;
            }
            else if(vec1[spos1] == vec2[spos2]){
                cout << vec1[spos1] * 10 << '\n';
                break;
            }
        }
    }
}