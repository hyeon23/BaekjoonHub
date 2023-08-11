#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <numeric>
using namespace std;

int main(){
    //년-월-일 시:분 //평년
    long long N, F;
    string L;
    cin >> N >> L >> F;
    //대여 가능분 계산
    int DDD = stoi(L.substr(0, 3));
    int hh = stoi(L.substr(4, 2));
    int mm = stoi(L.substr(7, 2));

    vector<int> arr = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    map<pair<string, string>, pair<string, string>> landmap;
    map<string, unsigned long long> ans;

    long long landmin = DDD * 24 * 60 + hh * 60 + mm;

    while(N--){
        string date, time, P, M;
        cin >> date >> time >> P >> M;

        if(landmap.find({P, M}) == landmap.end()){
            landmap[{P, M}] = {date, time};
        }
        else{
            //찾았당 에러!
            long long fday = accumulate(arr.begin(), arr.begin() + stoi(landmap[{P, M}].first.substr(5, 2)), 0) + stoi(landmap[{P, M}].first.substr(8, 2));
            long long sday = accumulate(arr.begin(), arr.begin() + stoi(date.substr(5, 2)), 0) + stoi(date.substr(8, 2));
            long long daydiff = sday - fday;
            long long hourdiff = stoi(time.substr(0, 2)) - stoi(landmap[{P, M}].second.substr(0, 2));
            long long mindiff = stoi(time.substr(3, 2)) - stoi(landmap[{P, M}].second.substr(3, 2));
            long long totalmin = daydiff * 24 * 60 + hourdiff * 60 + mindiff;
            if(totalmin > landmin){
                totalmin -= landmin;
                ans[M] += totalmin * F;
            }
            landmap.erase({P, M});
        }
    }

    if(ans.empty())
        cout << -1;
    else
        for(auto i : ans)
            cout << i.first << ' ' << i.second << '\n';
}