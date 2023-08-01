#include <map>
#include <string>
#include <iostream>

using namespace std;

int solution(string dirs) {
    int answer = 0;
    pair<int, int> curpos = {0, 0};
    map<pair<pair<int, int>, pair<int, int>>, int> map;
    
    for(int i = 0; i < dirs.size(); ++i){
        if(dirs[i] == 'U'){
            if(curpos.second + 1 <= 5){
                pair<int, int> secondpos = {curpos.first, curpos.second + 1};
                if(map[{curpos, secondpos}] == 0 && map[{secondpos, curpos}] == 0)
                    map[{curpos, secondpos}] = 1;
                curpos = secondpos;
            }
        }
        else if(dirs[i] == 'D'){
            if(curpos.second - 1 >= -5){
                pair<int, int> secondpos = {curpos.first, curpos.second - 1};
                if(map[{curpos, secondpos}] == 0 && map[{secondpos, curpos}] == 0)
                    map[{curpos, secondpos}] = 1;
                curpos = secondpos;
            }
        }
        else if(dirs[i] == 'R'){
            if(curpos.first + 1 <= 5){
                pair<int, int> secondpos = {curpos.first + 1, curpos.second};
                if(map[{curpos, secondpos}] == 0 && map[{secondpos, curpos}] == 0)
                    map[{curpos, secondpos}] = 1;
                curpos = secondpos;
            }
        }
        else if(dirs[i] == 'L'){
            if(curpos.first - 1 >= -5){
                pair<int, int> secondpos = {curpos.first - 1, curpos.second};
                if(map[{curpos, secondpos}] == 0 && map[{secondpos, curpos}] == 0)
                    map[{curpos, secondpos}] = 1;
                curpos = secondpos;
            }
        }
    }
    return map.size() / 2;
}