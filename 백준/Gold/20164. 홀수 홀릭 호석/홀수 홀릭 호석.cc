#include <bits/stdc++.h>
using namespace std;
int max_ans = -1, min_ans = INT_MAX;
string str;

int odd_num(string str){
    int num = 0;
    for(auto i : str) if((i - '0') % 2 != 0) ++num;
    return num;
}

void recursion(string str, int cur){
    if(str.size() == 1){
        max_ans = max(max_ans, cur);
        min_ans = min(min_ans, cur);
        return;
    }
    else if(str.size() == 2){
        string nxt = to_string((str[0] - '0') + (str[1] - '0'));
        recursion(nxt, cur + odd_num(nxt));
    }
    else{
        //str1 len
        for(int i = 1; i < str.size()-1; ++i){
            //str2 len
            for(int j = 1; j < str.size() - i; ++j){
                string str1 = str.substr(0, i);
                string str2 = str.substr(i, j);
                string str3 = str.substr(i+j, str.size()-i-j);//str3 len = str.size() - str1len - str2len
                string nxt = to_string(stoi(str1) + stoi(str2) + stoi(str3));
                recursion(nxt, cur + odd_num(nxt));
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //호석이가 현재단계 수에 취할 연산
    //1. 수의 각 자리 숫자 중 홀수의 개수를 종이에 적임
    //2. 수가 한자리면 더이상 아무것도 하지 못하고 종료
    //3. 수가 두자리면, 2개로 나눠 합을 구해 새로운 수로 생각
    //4. 수가 세자리 이상이면 임의 위치에서 끊어 3개의 수로 분할하고, 3개를 더한 값을 새로운 수로 간주
    //ex) 82019
    cin >> str;
    recursion(str, odd_num(str));
    cout << min_ans << ' ' << max_ans;
    return 0;
}