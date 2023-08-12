#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;//문자의 개수: S: - M: * U: / P: + C: 결과반환

    string str;
    cin >> str;
    queue<int> ans;

    string curnum;
    char priorcmd;
    for(int i = 0; i < str.size(); ++i){
        if(isdigit(str[i])){
            curnum += str[i];
        }
        else if(str[i] == 'S'){//-1
            if(curnum != "") ans.push(stoi(curnum));
            ans.push(-1);
            curnum = "";
        }
        else if(str[i] == 'M'){//-2
            if(curnum != "") ans.push(stoi(curnum));
            ans.push(-2);
            curnum = "";
        }
        else if(str[i] == 'U'){//-3
            if(curnum != "") ans.push(stoi(curnum));
            ans.push(-3);
            curnum = "";
        }
        else if(str[i] == 'P'){//-4
            if(curnum != "") ans.push(stoi(curnum));
            ans.push(-4);
            curnum = "";
        }
        else if(str[i] == 'C'){//-5
            if(curnum != "") ans.push(stoi(curnum));
            ans.push(-5);
            curnum = "";
        }
    }
    int fr, ccnt = 0;

    while(!ans.empty()){
        if(ans.front() == -1){//s
            ans.pop();
            if(ans.empty()) break;

            fr -= ans.front();
            ans.pop();
        }
        else if(ans.front() == -2){//m
            ans.pop();
            if(ans.empty()) break;

            fr *= ans.front();
            ans.pop();
        }
        else if(ans.front() == -3){//u
            ans.pop();
            if(ans.empty()) break;

            fr /= ans.front();
            ans.pop();
        }
        else if(ans.front() == -4){//p
            ans.pop();
            if(ans.empty()) break;

            fr += ans.front();
            ans.pop();
        }
        else if(ans.front() == -5){//c
            cout << fr << ' ';
            ccnt++;
            ans.pop();
        }
        else{
            fr = ans.front();
            ans.pop();
        }
    }
    if(ccnt == 0) cout << "NO OUTPUT";
}