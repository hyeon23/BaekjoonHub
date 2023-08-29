#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A, B, x, y;
    cin >> N >> A >> B;

    map<pair<int, int>, bool> dots;

    while(N--){
        cin >> x >> y;
        dots[{x, y}] = true;
    }

    int ans = 0;

    for(auto i : dots){
        if(dots.find({i.first.first+A, i.first.second+B}) != dots.end()){
            if(dots.find({i.first.first, i.first.second+B}) != dots.end()){
                if(dots.find({i.first.first+A, i.first.second}) != dots.end()){
                    if(dots.find({i.first.first, i.first.second}) != dots.end()){
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans;

    

    return 0;
}