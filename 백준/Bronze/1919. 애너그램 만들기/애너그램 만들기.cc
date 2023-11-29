#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2; int sum = 0;
    vector<int> alpha(26, 0);
    cin >> s1 >> s2;
    for(auto c : s1) alpha[c - 'a']++;
    for(auto c : s2) alpha[c - 'a']--;
    for(auto c : alpha) if(c != 0) sum += abs(c);
    cout << sum;
    return 0;
}