#include <bits/stdc++.h>
using namespace std;

int main() {
    //맨 앞 연산자 or 맨 뒤 연산자 먼저 계산
    //음수 부호는 연산자로 취급 X
    //곱셈, 나눗셈 >> 덧셈, 뺄샘 우선 계산
    //연산자의 우선순위가 같다면, 계산 결과가 큰 것부터 계산
    //계산 결과값이 같으면 먼저 나온것부터 계산
    deque<long long> numdeq;//num, ispositive
    deque<char> chardeq;

    string str, tmp;
    cin >> str;
    
    bool isnegative = false;

    for(int i = 0; i < str.size(); ++i){
        if(isdigit(str[i])){
            tmp += str[i];
            if(i == str.size() - 1){
                if(isnegative) { 
                    numdeq.push_back(-1 * stoll(tmp));
                    isnegative = false;
                }
                else numdeq.push_back(stoll(tmp));
                tmp = "";
            }
        }
        else{
            if(str[i] == '+')
                chardeq.push_back('+');
            else if(str[i] == '-'){
                if(i == 0){
                    isnegative = true;
                }
                else{
                    chardeq.push_back('-');
                }
            }
            else if(str[i] == '*')
                chardeq.push_back('*');
            else if(str[i] == '/')
                chardeq.push_back('/');
            if(tmp != "") {
                if(isnegative) { 
                    numdeq.push_back(-1 * stoll(tmp));
                    isnegative = false;
                }
                else numdeq.push_back(stoll(tmp));
                tmp = "";
            }
        }
    }
    while(numdeq.size() > 1 && !chardeq.empty()){
        long long f1 = numdeq.front();
        numdeq.pop_front();
        long long f2 = numdeq.front();
        numdeq.push_front(f1);

        long long b2 = numdeq.back();
        numdeq.pop_back();
        long long b1 = numdeq.back();
        numdeq.push_back(b2);

        char c1 = chardeq.front();

        char c2 = chardeq.back();

        long long res1;
        long long res2;

        if(c1 == '+') res1 = f1 + f2;
        else if(c1 == '-') res1 = f1 - f2;
        else if(c1 == '*') res1 = f1 * f2;
        else if(c1 == '/') res1 = f1 / f2;
        if(c2 == '+') res2 = b1 + b2;
        else if(c2 == '-') res2 = b1 - b2;
        else if(c2 == '*') res2 = b1 * b2;
        else if(c2 == '/') res2 = b1 / b2;

        if((c1 == '+' || c1 == '-') && (c2 == '*' || c2 == '/')){
            //c2처리
            numdeq.pop_back();
            numdeq.pop_back();
            numdeq.push_back(res2);
            chardeq.pop_back();
        }
        else if((c1 == '*' || c1 == '/') && (c2 == '+' || c2 == '-')){
            //c1처리
            numdeq.pop_front();
            numdeq.pop_front();
            numdeq.push_front(res1);
            chardeq.pop_front();
        }
        else{
            //값이 큰 것 선택
            if(res1 >= res2){
                numdeq.pop_front();
                numdeq.pop_front();
                numdeq.push_front(res1);
                chardeq.pop_front();
            }
            else if(res1 < res2){
                numdeq.pop_back();
                numdeq.pop_back();
                numdeq.push_back(res2);
                chardeq.pop_back();
            }
        }
    }
    cout << numdeq.front();
}