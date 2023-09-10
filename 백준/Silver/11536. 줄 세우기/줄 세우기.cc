#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string str;

    vector<string> vec1(N);
    vector<string> vec2(N);

    for(int i = 0; i < N; ++i){
        cin >> str;
        vec1[i] = str;
        vec2[i] = str;
    }

    sort(vec2.begin(), vec2.end());

    if(vec1 == vec2) { 
        cout << "INCREASING";
        return 0;
    }

    sort(vec2.begin(), vec2.end(), greater<>());

    if(vec1 == vec2) { 
        cout << "DECREASING";
        return 0;
    }
    
    cout << "NEITHER";
}