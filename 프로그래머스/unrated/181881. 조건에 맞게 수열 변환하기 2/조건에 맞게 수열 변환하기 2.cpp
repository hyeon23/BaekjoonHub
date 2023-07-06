#include <string>
#include <vector>

using namespace std;

vector<int> cmpvec;

int solution(vector<int> arr) {
    int answer = 0, count = 0;
    vector<int> basearr(arr.begin(), arr.end());
    while(true){
        count = 0;
        
        vector<int> cpyarr(basearr.begin(), basearr.end());
        for(int i = 0; i < basearr.size(); ++i){
            if(basearr[i] >= 50 && basearr[i] % 2 == 0)
                basearr[i] /= 2;
            else if(basearr[i] < 50 && basearr[i] % 2 == 1)
                basearr[i] = basearr[i] * 2 + 1;            
        }
        
        for(int i = 0; i < basearr.size(); ++i)
            if(basearr[i] == cpyarr[i])
                count++;
        
        if(count == basearr.size())
            return answer;
        else
            answer++;
    }
}