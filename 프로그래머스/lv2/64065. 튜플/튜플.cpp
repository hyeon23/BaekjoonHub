#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> A, pair<int, int> B){
    return A.second > B.second;
}

vector<int> solution(string s) {
    map<int, int> map;
  
    string tmp = "";
    
    string str(s.begin() + 1, s.end() - 1);
    
    for(int i = 0; i < str.size(); ++i){
        //{11,2,3},{2,1},{1,2,4,3},{2}
        
        if(str[i] == '}'){
            map[stoi(tmp)]++;
            tmp = "";
        }
        else if(str[i] == ','){
            if(isdigit(str[i - 1])){
                map[stoi(tmp)]++;
                tmp = "";
            }
        }
        else if(isdigit(str[i]))
            tmp += str[i];
    }
    vector<pair<int, int>> pvec(map.begin(), map.end());
    vector<int> ans;
    sort(pvec.begin(), pvec.end(), cmp);
    
    for(auto i : pvec)
        ans.push_back(i.first);
    return ans;
}