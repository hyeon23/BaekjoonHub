//sol1(시간초과): S에 문자열을 추가해 T로 만드는 방법
// #include <bits/stdc++.h>
// using namespace std;
// string S, T, RT;
// int ans = 0;
// void recursion(string cur, bool reversed){
//     if(cur.size() == T.size()){
//         if(reversed){
//             if(cur == RT) ans = 1;
//         }
//         else{
//             if(cur == T) ans = 1;
//         }
//         return;
//     }
//     if(reversed){
//         recursion("A"+cur, true);
//         recursion("B"+cur, false); 
//     }
//     else{
//         recursion(cur+"A", false);
//         recursion(cur+"B", true);    
//     }
// }
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
//     cin >> S >> T;
//     RT = T;
//     reverse(RT.begin(), RT.end());
//     recursion(S, false);
//     cout << ans;
//     return 0;
// }

//sol2: T에서 문자열을 제거해 S로 만드는 방법
#include <bits/stdc++.h>
using namespace std;
string S, T, RS;
int ans = 0;
void recursion(string cur, bool reversed){
    if(cur.size() == S.size()){
        if(reversed){
            if(cur == RS) ans = 1;
        }
        else{
            if(cur == S) ans = 1;
        }
        return;
    }

    int cursize = cur.size()-1;

    if(reversed){
        if(cur[0] == 'A') recursion(cur.substr(1, cursize), true);
        if(cur[cur.size()-1] == 'B') recursion(cur.substr(0, cursize), false);    
    }
    else{
        if(cur[cur.size()-1] == 'A') recursion(cur.substr(0, cursize), false);
        if(cur[0] == 'B') recursion(cur.substr(1, cursize), true);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> S >> T;
    RS = S;
    reverse(RS.begin(), RS.end());
    recursion(T, false);
    cout << ans;
    return 0;
}