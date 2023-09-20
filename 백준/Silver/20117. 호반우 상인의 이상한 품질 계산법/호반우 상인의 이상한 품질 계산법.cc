#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> cows(N);

    for(int i = 0; i < N; ++i) cin >> cows[i];

    sort(cows.begin(), cows.end());

    int midcow;

    //2 4 8 9

    //짝수: 2개 = 2번째, 4개 = 3번째 -> 중간 오른쪽 선택
    //홀수: 3개 = 2번째, 5개 = 3번째 -> 중간 선택

    //18 + 16 = 34

    //2개씩 양쪽 끝에서 묶어나가고, 홀수일 경우 마지막에 한개가 남게 되면 그걸 더해주면 됨

    int left = 0;
    int right = cows.size()-1;

    int sum = 0;

    while(left < right){
        sum += 2 * cows[right];

        left++;
        right--;
    }

    if(left == right) sum += cows[left];

    cout << sum;
}