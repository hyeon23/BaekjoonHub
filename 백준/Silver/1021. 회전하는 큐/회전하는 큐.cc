//양반향 순환 큐 = 덱
    //1. 첫 번째 원소를 뽑아낸다.(pop)
    //-pop_front()
    //2. 왼쪽으로 한칸씩 이동(rotate)
    //-push_front() / pop_back();
    //3. 오른쪽으로 한칸 이동(rotate)
    //-push_back() / pop_front()

#include <iostream>
#include <deque>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    deque<int> DQ;
    int N, M;
    int left_cnt, right_cnt;
    int cnt = 0;

    cin >> N >> M;

    for(int i = 1; i <= N; ++i){
        DQ.push_back(i);
    }

    while(M--){
        int num;
        cin >> num;
        //DQ의 num이 존재하는 index를 기준
        //왼쪽 & 오른쪽 최소 거리를 구함
        for(int i = 0; i < DQ.size(); ++i){
            if(DQ[i] == num){
                left_cnt = i;
                right_cnt = DQ.size() - i;
                break;
            }
        }

        //왼쪽이 짧거나 같다면, 반복해서 2 rotate 수행
        if(left_cnt <= right_cnt){
            while(true){
                if(DQ.front() == num){
                    DQ.pop_front();
                    break;
                }
                DQ.push_back(DQ.front());
                DQ.pop_front();
                cnt++;
            }
        }
        else{//오른쪽이 짧다면, 반복해서 3 rotate 수행
            cnt++;
            while(true){
                if(DQ.back() == num){
                    DQ.pop_back();
                    break;
                }
                DQ.push_front(DQ.back());
                DQ.pop_back();
                cnt++;
            }
        }
    }

    cout << cnt;
}