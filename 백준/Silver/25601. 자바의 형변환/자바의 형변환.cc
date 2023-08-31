#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string c, p;

    cin >> n;

    map<string, string> node;//자신, 부모, 자식

    for(int i = 0; i < n-1; ++i){
        cin >> c >> p;
        node[c] = p;
    }

    cin >> c >> p;

    string c1 = c, p1 = p;
    string c2 = c, p2 = p;

    //c가 자식 p가 부모
    while(node.find(c1) != node.end()){
        if(node[c1] == p1){
            cout << 1;
            return 0;
        }
        else{
            c1 = node[c1];
        }
    }

    while(node.find(p2) != node.end()){
        if(node[p2] == c2){
            cout << 1;
            return 0;
        }
        else{
            p2 = node[p2];
        }
    }

    cout << 0;
    return 0;
}