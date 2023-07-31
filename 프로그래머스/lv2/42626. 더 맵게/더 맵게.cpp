#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(vector<int> scoville, int K) {
    int count = 0;
    //스코빌 배열에 음식이 2개 이상인 경우
    //->스코빌 배열 중 k 미만인 음식이 존재할 때, X 리턴
    //->스코빌 배열 중 k 미만인 음식이 존재하지 않을 때, 0 리턴
    //스코빌 배열에 음식이 하나남았는데, 그 음식이 K 이하인경우 -1 리턴
    
    //내부가 항상 오름차순 정렬로 유지되는 우선순위 큐(힙)
    priority_queue<int, vector<int>, greater<int>> sf(scoville.begin(), scoville.end());
    
    while(sf.size() >= 2 && sf.top() < K){
        int a = sf.top();
        sf.pop();
        int b = sf.top();
        sf.pop();
        int sum = a + 2 * b;
        sf.push(sum);
        ++count;
    }
    
    
    return sf.top() < K ? -1 : count;
}