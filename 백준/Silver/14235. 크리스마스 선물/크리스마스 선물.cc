#include <bits/stdc++.h>
using namespace std;

priority_queue<int> gifts;

int main(){
    int n, a, g;
    cin >> n;

    while(n--){
        cin >> a;

        if(a == 0){
            if(gifts.empty()) cout << -1 << '\n';
            else {
                cout << gifts.top() << '\n';
                gifts.pop();
            }
        }
        else{
            while(a--){
                cin >> g;
                gifts.push(g);
            }
        }
    }
    return 0;
}