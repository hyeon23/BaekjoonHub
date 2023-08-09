#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool cmp(string A, string B){
    if(A.size() == B.size())
        return A < B;
    return A.size() < B.size();
}

int main(){
    int N;
    cin >> N;
    string str;
    vector<string> vec;

    for(int i = 0; i < N; ++i){
        str = "";
        cin >> str;
        string tmp = "";
        for(int j = 0; j < str.size(); ++j){
            if(isdigit(str[j])){

                tmp += str[j];

                if(j == str.size() - 1){
                    while(tmp[0] == '0' && tmp.size() != 1)
                        tmp.erase(0, 1);
                    vec.push_back(tmp);
                }
                    
            }
            else{
                if(tmp != ""){
                    while(tmp[0] == '0' && tmp.size() != 1)
                        tmp.erase(0, 1);

                    vec.push_back(tmp);
                    tmp = "";
                }
            }
        }
    }

    sort(vec.begin(), vec.end(), cmp);

    for(auto i : vec){
        cout << i << '\n';
    }
}