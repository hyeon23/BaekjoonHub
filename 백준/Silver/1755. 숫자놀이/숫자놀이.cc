#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, string> m;
    m['0'] = "zero";
    m['1'] = "one";
    m['2'] = "two";
    m['3'] = "three";
    m['4'] = "four";
    m['5'] = "five";
    m['6'] = "six";
    m['7'] = "seven";
    m['8'] = "eight";
    m['9'] = "nine";

    map<string, char> rm;
    rm["zero"] = '0';
    rm["one"] = '1';
    rm["two"] = '2';
    rm["three"] = '3';
    rm["four"] = '4';
    rm["five"] = '5';
    rm["six"] = '6';
    rm["seven"] = '7';
    rm["eight"] = '8';
    rm["nine"] = '9';

    int M, N;
    cin >> M >> N;

    vector<string> pvec;

    for(int i = M; i <= N; ++i){
        string tmp = to_string(i);
        string t;
        for(int j = 0; j < tmp.size(); ++j){
            t += m[tmp[j]];

            if(j != tmp.size() - 1) t += ' ';
        }
        pvec.push_back(t);
    }

    sort(pvec.begin(), pvec.end());

    for(int i = 0; i < pvec.size(); ++i){
        stringstream ss(pvec[i]);
        string tmp;
        string ans;
        while(ss >> tmp){
            ans += rm[tmp];
        }
        cout << ans << ' ';

        if((i+1) % 10 == 0) cout << '\n';
    }

    return 0;
}