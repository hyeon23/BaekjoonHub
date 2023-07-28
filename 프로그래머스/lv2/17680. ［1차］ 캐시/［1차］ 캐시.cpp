#include <deque>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int cacheSize, vector<string> cities) {
    deque<string> cache;
    bool ctrigger;
    int exetime = 0;
    for(int i = 0; i < cities.size(); ++i)
        for(int j = 0; j < cities[i].size(); ++j)
            cities[i][j] = tolower(cities[i][j]);
    
    for(int i = 0; i < cities.size(); ++i){
        ctrigger = true;
        //"A" "C" "B" "C"
        //=> "A" "B" "C"
        //=> "C" "B" "C"
        auto it = cache.begin();
        for(; it != cache.end(); ++it){
            if(*it == cities[i]){
                exetime += 1;
                ctrigger = false;
                break;
            }
        }
        if(ctrigger){//찾지 못한 경우
            exetime += 5;  
            
        } 
        else{//찾은 경우
            cache.erase(it);
        }
        cache.push_back(cities[i]);
        if(cache.size() > cacheSize) cache.pop_front();
    }
    return exetime;
}