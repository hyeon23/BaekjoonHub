#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    int answer = 0;
    vector<int> clo(n, 1);
    for (int i = 0; i < lost.size(); ++i) clo[lost[i] - 1] = 0;
    for (int i = 0; i < reserve.size(); ++i) clo[reserve[i] - 1]++;

    // 1: 2, 2: 0, 3: 2, 4: 0, 5: 2

    for (int i = 0; i < clo.size(); ++i){
        if (!clo[i]){
            if (i - 1 < 0){
                if (clo[i + 1] > 1){
                    clo[i + 1]--;
                    clo[i]++;
                }
            }
            else if (i + 1 > clo.size() - 1){
                if (clo[i - 1] > 1){
                    clo[i - 1]--;
                    clo[i]++;
                }
            }
            else{
                if (clo[i - 1] > 1){
                    clo[i - 1]--;
                    clo[i]++;
                }
                else if (clo[i + 1] > 1){
                    clo[i + 1]--;
                    clo[i]++;
                }
            }
        }
        if(clo[i]) answer++;
    }

    return answer;
}