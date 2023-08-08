#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main(){
    int N;
    
    cin >> N;
    cin.ignore();//cin >> getline 사용시, 입력이 씹히는 현상 방지


    for(int i = 1; i <= N; ++i){
        string tmp;
        getline(cin, tmp);
        
        string t;

        vector<string> strvec;

        stringstream ss(tmp);
        
        while(ss >> t)
            strvec.push_back(t);

        reverse(strvec.begin(), strvec.end());

        cout << "Case #" << i << ": ";
        
        for(auto i : strvec)
            cout << i << ' ';

        cout << '\n';
    }
}