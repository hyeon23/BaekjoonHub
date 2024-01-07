// #include <bits/stdc++.h>
// using namespace std;
// string str;
// vector<bool> visited(101, false);
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
//     cin >> str;
//     int len = str.length();
//     for(int i = 0; i < len; ++i){
//         vector<pair<string, int>> vec;//각 case를 저장할 vector
//         for(int j = 0; j < len; ++j){
//             //사용된적 없는 문자라면
//             if(!visited[j]){
//                 string temp;
//                 //이전에 사용한 문자들 추가
//                 for(int k = 0; k < len; ++k){
//                     if(k == j || visited[k]){
//                         temp += str[k];
//                     }
//                 }
//                 vec.push_back({temp, j});
//             }
//         }
//         sort(vec.begin(), vec.end());
//         cout << vec[0].first << '\n';
//         visited[vec[0].second] = true;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
string str;
vector<char> ans(101, ' ');
//넣는 로직 변경 필요
void recursion(string curstr, int startpos){
    
    //curstr[idx] 추가 위치 수정
    if(curstr.size() == 1){        
        //curstr[idx] 추가 위치 수정
        ans[startpos] = curstr[0];
        
        for(int i = 0; i < ans.size(); ++i){
            if(ans[i] != ' ') cout << ans[i];
        }
        cout << '\n';
        return;
    }

    //curstr에서 가장 작은애 찾기

    char mc = 'Z' + 1;
    int idx = 0;
    for(int i = 0; i < curstr.size(); ++i){
        if(curstr[i] < mc){
            mc = curstr[i];
            idx = i;
        }
    }

    //curstr[idx] 추가 위치 수정
    ans[startpos + idx] = curstr[idx];

    for(int i = 0; i < ans.size(); ++i){
        if(ans[i] != ' ') cout << ans[i];
    }
    cout << '\n';

    if(idx != curstr.size()-1) recursion(curstr.substr(idx+1, curstr.size() - (idx + 1)), startpos+idx+1);
    if(idx != 0) recursion(curstr.substr(0, idx), startpos);
}
int main(){
    cin >> str;
    recursion(str, 0);
    return 0;
}