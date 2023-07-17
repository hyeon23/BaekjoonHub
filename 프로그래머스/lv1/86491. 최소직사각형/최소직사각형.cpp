#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int maxX = -1;
    int maxY = -1;
    for(int i = 0; i < sizes.size(); ++i)
        if(sizes[i][0] < sizes[i][1])
            swap(sizes[i][0], sizes[i][1]);
    
    for(int j = 0; j < sizes.size(); ++j){
        maxX = max(maxX, sizes[j][0]);
        maxY = max(maxY, sizes[j][1]);
    }
    
    return maxX * maxY;
}