#include <stack>
#include <iostream>
using namespace std;

int main(){
    int K, sum = 0;    
    stack<int> stk;
    cin >> K;
    while(K--){
        int x;
        cin >> x; 
        if(x == 0){
            stk.pop();
        }
        else{
            stk.push(x);
        }
    }

    while(!stk.empty()){
        sum += stk.top();
        stk.pop();
    }

    cout << sum;

    return 0;
}