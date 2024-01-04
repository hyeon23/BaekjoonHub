// #include <bits/stdc++.h>
// using namespace std;
// string S;
// stack<char> stkc1;
// stack<string> stkc2;
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
//     cin >> S;
//     //K(Q) 압축: K는 한자리 정수(숫자), Q는 0자리 이상의 문자열
//     string tmp = "";
//     for(int i = 0; i < S.size(); ++i){
//         if(S[i] == '('){
//             stkc1.push('(');
//             stkc2.push(tmp);
//             tmp = "";
//         }
//         else if(S[i] == ')'){
//             if(!stkc1.empty() && stkc1.top() == '('){
//                 stkc1.pop();
//                 if(tmp != "") stkc2.push(tmp);
//                 tmp = "";
//                 if(!stkc2.empty()){
//                     string tmp2 = stkc2.top();
//                     stkc2.pop();
//                     if(!stkc2.empty()) {
//                         string newtop = stkc2.top();
//                         string newtmp = "";
//                         stkc2.top() = stkc2.top().substr(0, newtop.size()-1);
//                         for(int i = 0; i < newtop[newtop.size() - 1] - '0'; ++i){
//                             newtmp += tmp2;
//                         }
//                         stkc2.top() += newtmp;
//                     }
//                 }
//             }
//         }
//         else{
//             tmp += S[i];
//         }
//     }
//     if(tmp != "") cout << tmp.size();
//     else cout << stkc2.top().size();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
string str;
bool visited[51];
int recur(int idx)
{
    int cnt = 0;//최종 문자열의 길이
    for (int i = idx; i < str.size(); ++i)
    {
        char ch = str[i];
        // open = (
        if (ch == '(' && !visited[i])
        {
            visited[i] = true;
            --cnt;
            cnt += (str[i - 1] - '0') * recur(i + 1);
        }
        // close = )
        else if (ch == ')' && !visited[i])
        {
            visited[i] = true;
            return cnt;
        }
        // num
        else if (!visited[i])
        {
            visited[i] = true;
            ++cnt;
        }
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> str;
    cout << recur(0);
    return 0;
}
/*
1. 입력받은 압축된 문자열의 왼쪽부터 탐색
-재귀 함수 인덱스를 0부터 시작해 오른쪽 끝까지 탐색
2. 현재 문자가 숫자라면 cnt(길이)를 증가시키고 방문 체크
3. 현재 문자가 '('라면 방문 체크를 하고 재귀 함수를 호출
-괄호 세트의 압축을 해제하는 것을 의미
-return 값으로 괄호 안에 있는 수의 길이를 얻게 됨
-즉, 현재 깊이의 재귀에서 cnt에 괄호 왼쪽 수와 return 값을 곱해 더해줌
4. 현재 문자가 ')'라면 방문 체크를 하고 cnt(길이)를 반환
*/