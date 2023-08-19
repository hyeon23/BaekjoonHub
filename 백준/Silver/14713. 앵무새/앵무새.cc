#include <bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int N;
    string str, word;
    cin >> N;
    cin.ignore();

    vector<queue<string>> qvec(N);

    for(int i = 0; i < N; ++i){
        getline(cin, str);
        stringstream ss(str);
        while(ss >> word){
            qvec[i].push(word);
        }
    }

    //i want to see you
    //next week
    //good luck

    getline(cin, str);
    stringstream ss2(str);
    queue<string> ans;
    while(ss2 >> word){
        ans.push(word);
    }
    bool t = false;
    while(!ans.empty()){
        for(int i = 0; i < qvec.size(); ++i){
            if(qvec[i].front() == ans.front()){
                ans.pop();
                qvec[i].pop();
                break;
            }
            else{
                if(i == qvec.size() - 1) {
                    t = true;
                    break;
                }
            }
        }

        if(t) break;
    }

    for(int i = 0; i < qvec.size(); ++i){
        if(!qvec[i].empty()){
            cout << "Impossible";
            return 0;
        }

    }
    if(t) cout << "Impossible";
    else cout << "Possible";
}