#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> A, pair<int, int> B){
    if(A.second == B.second){
        return A.first < B.first;
    }
    return A.second > B.second;
}

int main(){
    int N, snum, A, B, C, D;
    cin >> N;

    vector<pair<int, int>> AS(N);
    vector<pair<int, int>> BS(N);
    vector<pair<int, int>> CS(N);
    vector<pair<int, int>> DS(N);

    for(int i = 0; i < N; ++i){
        int num;
        cin >> num >> AS[i].second >> BS[i].second >> CS[i].second >> DS[i].second;

        AS[i].first = num;
        BS[i].first = num;
        CS[i].first = num;
        DS[i].first = num;
    }

    set<int> clist;

    //국어 수상
    sort(AS.begin(), AS.end(), cmp);

    //이미 수상자 체크
    for(int i = 0; i < AS.size(); ++i){
        if(clist.find(AS[i].first) == clist.end()){//이미 존재하는 경우
            clist.insert(AS[i].first);
            cout << AS[i].first << ' ';
            break;
        }
    }
    //영어 수상
    sort(BS.begin(), BS.end(), cmp);

    //이미 수상자 체크
    for(int i = 0; i < BS.size(); ++i){
        if(clist.find(BS[i].first) == clist.end()){//이미 존재하는 경우
            clist.insert(BS[i].first);
            cout << BS[i].first << ' ';
            break;
        }
    }

    //수학 수상
    sort(CS.begin(), CS.end(), cmp);

    //이미 수상자 체크
    for(int i = 0; i < CS.size(); ++i){
        if(clist.find(CS[i].first) == clist.end()){//이미 존재하는 경우
            clist.insert(CS[i].first);
            cout << CS[i].first << ' ';
            break;
        }
    }

    //과학 수상
    sort(DS.begin(), DS.end(), cmp);

    //이미 수상자 체크
    for(int i = 0; i < DS.size(); ++i){
        if(clist.find(DS[i].first) == clist.end()){//이미 존재하는 경우
            clist.insert(DS[i].first);
            cout << DS[i].first << ' ';
            break;
        }
    }

    return 0;
}