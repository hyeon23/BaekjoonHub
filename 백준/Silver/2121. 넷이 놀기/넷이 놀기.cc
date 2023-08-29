#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, A, B, x, y, ans = 0;
    cin >> N >> A >> B;
    map<pair<int, int>, bool> dots;
    while(N--){
        cin >> x >> y;
        dots[{x, y}] = true;
    }
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