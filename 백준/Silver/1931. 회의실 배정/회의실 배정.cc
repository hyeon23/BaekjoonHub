#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N, end, begin;

    vector<pair<int, int>> schedule;

    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> begin >> end;
        schedule.push_back({end, begin});
    }

    sort(schedule.begin(), schedule.end());//종료시간 기준 오름차순 정렬

    int time = schedule[0].first;//제일 처음으로 종료되는 시간

    int count = 1;

    for(int i = 1; i < N; ++i){
        if(time <= schedule[i].second){//제일 처음으로 종료되는 시간 <= 그 다음 스케줄의 시작시간 -> cnt
            count++;
            time = schedule[i].first;
        }
    }
    cout << count;
}