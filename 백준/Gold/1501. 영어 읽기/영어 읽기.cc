#include <sstream>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    map<string, int> dic;
    cin >> N;
    string word;

    while(N--){
        cin >> word;

        if(word.size() > 1)
            sort(word.begin() + 1, word.end() - 1);

        dic[word]++;
    }

    cin >> M;
    cin.ignore();

    string t;

    while(M--){
        getline(cin, t);
        stringstream ss(t);
        string tmp;
        int ans = 1;

        while(ss >> tmp){

            if(tmp.size() > 1)
                sort(tmp.begin() + 1, tmp.end() - 1);
            if(dic[tmp] != 0)
                ans *= dic[tmp];
            else
                ans = 0;
        }
        cout << ans << '\n';
    }
}