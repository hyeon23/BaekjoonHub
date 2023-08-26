#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin.ignore();
    while(n--){
        stack<int> st;
        int depth = 0;
        unsigned long long res = 1;
        getline(cin, s);
        //depth = 2
        
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '['){
                st.push(0);
                depth = max(depth, (int)st.size());
            }
            else st.pop();
        }
        
        for(int i = 0; i < depth; ++i){
            res *= 2;
        }

        cout << res << '\n';
    }
}