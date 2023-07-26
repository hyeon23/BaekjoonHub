#include <string>
#include <vector>
using namespace std;
 
int count(int n){
    // 1의 개수
    int cnt = 0;
    for(int i = 0; n > 0; i++){
        if(n % 2 == 1)
            cnt++;
        n /= 2;
    }
    return cnt;
}
 
int solution(int n) 
{
    int cmp = count(n);
    // n을 1만큼 증가시키면서 확인
    while(1)
    {
        n++;
        
        // 1의 개수가 같으면 종료
        if(count(n) == cmp)
        {
            break;
        }
    }
    
    return n;
}