#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int num = 1000001;
    vector<bool> v(num, true);
    v[0] = 0;
    v[1] = 0;
    // 2. 소수 판별
    for (int i = 2; i * i <= num; i++) {
        if (v[i]) {
            for (int k = i * i; k <= num; k += i) {
                v[k] = false;
            }
        }
    }
    
    for(int i = 1; i <= n; ++i)
        if(v[i]) answer++;
    return answer;
}