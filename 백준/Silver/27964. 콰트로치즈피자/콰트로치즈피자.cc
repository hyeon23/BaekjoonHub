#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;//토핑 개수
    string cheese;
    set<string> cheeses;
    cin >> N;
    while(N--){
        cin >> cheese;
        if(cheese.size() >= 6 && cheese.substr(cheese.size() - 6) == "Cheese"){
            cheeses.insert(cheese);
        }
    }

    if(cheeses.size() >= 4) cout << "yummy";
    else cout << "sad";
}
