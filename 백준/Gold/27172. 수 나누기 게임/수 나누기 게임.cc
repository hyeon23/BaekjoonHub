#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, num;
    cin >> N;
    vector<int> nums(1000001, 0);
    vector<int> check(1000001, 0);
    vector<int> player;
    for(int i = 0; i < N; ++i){
        cin >> num;
        player.push_back(num);
        check[num] = 1;
    }

    for(int i : player){//플레이어가 갖고 있는 숫자 기반 탐색
        for(int j = 2 * i; j < 1000001; j += i){
            if(check[j] == 1){
                //플레이어가 갖고 있는 숫자의 배수를 다른 플레이어가 갖고 있으면,
                //기존 플레이어의 점수를 올리고, 배수를 갖고있는 플레이어의 점수를 내린다.
                nums[i]++;
                nums[j]--;
            }
        }
    }

    for(int i : player) cout << nums[i] << " ";
}