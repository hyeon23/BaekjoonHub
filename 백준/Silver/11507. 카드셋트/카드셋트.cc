#include <map>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    //모양/번호: P K H T 순
    vector<vector<int>> vec(4, vector<int>(13, 1)) ;

    string str;

    cin >> str;

    for(int i = 0; i < str.size() / 3; ++i){
        string curtype = "";
        int typenum;
        string curnum = "";
        for(int j = 0; j < 3; ++j){
            if(j == 0)
                curtype = str[3 * i + j];
            else
                curnum += str[3 * i + j];
        }

        if(curtype == "P") typenum = 0;
        else if(curtype == "K") typenum = 1;
        else if(curtype == "H") typenum = 2;
        else if(curtype == "T") typenum = 3;

        if(vec[typenum][stoi(curnum) - 1] == 0){
            cout << "GRESKA";
            return 0;
        }
        else
            vec[typenum][stoi(curnum) - 1]--;
    }

    for(int i = 0; i < 4; ++i){
        int sum = 0;
        for(int j = 0; j < 13; ++j){
            sum += vec[i][j];
        }
        cout << sum << ' ';
    }
        
}