#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

char arr[21][21];

int main(){
    int r, c;
    cin >> r >> c;
    vector<string> dic;

    //가로 체크
    for(int i = 0; i < r; ++i){
        string tmp = "";
        for(int j = 0; j < c; ++j){
            cin >> arr[i][j];
            if(arr[i][j] == '#'){
                if(tmp.size() > 1) dic.push_back(tmp);
                tmp = "";
            }
            else{
                tmp.push_back(arr[i][j]);
            }
        }
        if(tmp.size() > 1) dic.push_back(tmp);
    }
    //세로 체크
    for(int i = 0; i < c; ++i){
        string tmp = "";
        for(int j = 0; j < r; ++j){
            if(arr[j][i] == '#'){
                if(tmp.size() > 1) dic.push_back(tmp);
                tmp = "";
            }
            else{
                tmp.push_back(arr[j][i]);
            }
        }
        if(tmp.size() > 1) dic.push_back(tmp);
    }

    sort(dic.begin(), dic.end());
    
    cout << dic[0];
}