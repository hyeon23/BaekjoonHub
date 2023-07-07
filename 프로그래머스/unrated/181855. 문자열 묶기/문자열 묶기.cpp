#include <map>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int curmax = -1;;
    map<int, int> map;
    for(int i = 0; i < strArr.size(); ++i)
        map[strArr[i].size()]++;
    
    for(auto i : map){
        curmax = max(i.second, curmax);
    }
    
    //for(auto it = map.begin(); it != map.end(); ++it)
    //    if((*it).second > curmax){
    //        curmax = (*it).second;
    //    }
    return curmax;
}