#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    int n;
    stack<int> stk;

    cin >> n;

    while(n--){
        int tmp;
        cin >> tmp;
        stk.push(tmp);
    }
    int maxheight = 0;
    int ans = 0;
    while(!stk.empty()){
        int t = stk.top();
        if(maxheight < t){
            maxheight = t;
            ans++;
        }
        stk.pop();
    }
    cout << ans;
}