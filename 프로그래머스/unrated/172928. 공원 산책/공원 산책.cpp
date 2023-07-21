#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    vector<int> cp;
    for(int i = 0; i < park.size(); ++i){
        for(int j = 0; j < park[i].size(); ++j){
            if(park[i][j] == 'S'){
                cp.push_back(i);
                cp.push_back(j);
                break;
            }
        }
    }
    for(int i = 0; i < routes.size(); ++i){
        bool pass = true;
        if(routes[i][0] == 'E'){
            if(cp[1] + routes[i][2] - '0' > park[cp[0]].size() - 1) continue;
            int max = cp[1] + (routes[i][2] - '0');
            for(int j = cp[1] + 1; j <= max; ++j){
                if(park[cp[0]][j] == 'X'){
                    pass = false;
                    break;
                }
            }
            if(pass)
                cp[1] = max;
        }
        else if(routes[i][0] == 'W'){
            if(cp[1] - routes[i][2] + '0' < 0) continue;
            int max = cp[1] - (routes[i][2] - '0');
            for(int j = cp[1] - 1; j >= max; --j){
                if(park[cp[0]][j] == 'X'){
                    pass = false;
                    break;
                }
            }
            if(pass)
                cp[1] = max;
        }
        else if(routes[i][0] == 'S'){
            if(cp[0] + routes[i][2] - '0' > park.size() - 1) continue;
            int max = cp[0] + (routes[i][2] - '0');
            for(int j = cp[0] + 1; j <= max; ++j){
                if(park[j][cp[1]] == 'X'){
                    pass = false;
                    break;
                }
            }
            if(pass)
                cp[0] = max;
        }
        else if(routes[i][0] == 'N'){
            if(cp[0] - routes[i][2] + '0' < 0) continue;
            int max = cp[0] - (routes[i][2] - '0');
            for(int j = cp[0] - 1; j >= max; --j){
                if(park[j][cp[1]] == 'X'){
                    pass = false;
                    break;
                }
            }
            if(pass)
                cp[0] = max;
        }
    }
    return cp;
}