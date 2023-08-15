#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main(){
    int N;
    vector<double> vec(N, 0);
    stack<double> stk;
    string str;
    cin >> N >> str;

    for(int i = 0; i < N; ++i)
        cin >> vec[i];

    for(int i = 0; i < str.size(); ++i){
        if(str[i] == '+'){
            double A = stk.top();
            stk.pop();
            double B = stk.top();
            stk.pop();
            stk.push(B + A);
        }
        else if(str[i] == '-'){
            double A = stk.top();
            stk.pop();
            double B = stk.top();
            stk.pop();
            stk.push(B - A);
        }
        else if(str[i] == '*'){
            double A = stk.top();
            stk.pop();
            double B = stk.top();
            stk.pop();
            stk.push(B * A);
        }
        else if(str[i] == '/'){
            double A = stk.top();
            stk.pop();
            double B = stk.top();
            stk.pop();
            stk.push(B / A);
        }
        else if(isupper(str[i]))
            stk.push(vec[str[i] - 'A']);
        
    }
    cout << fixed;
    cout.precision(2);
    cout << stk.top();
}