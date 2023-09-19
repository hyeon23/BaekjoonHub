#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, tmp;
    cin >> N;
    vector<int> vec1;
    vector<int> vec2;
    for(int i = 0; i < N; ++i){
        cin >> tmp;
        if(i % 2 == 0){//짝수번째
            vec1.push_back(tmp);
        }
        else{//홀수번째
            vec2.push_back(tmp);
        }
    }

    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());

    if(vec1.size() > vec2.size()){
        for(int i = 0; i < vec2.size(); ++i){
            if((vec2[i] < vec1[i]) || (vec2[i] > vec1[i+1])) {
                cout << "NO";
                return 0;
            }
        }
    }
    else if(vec1.size() == vec2.size()){
        for(int i = 0; i < vec2.size(); ++i){
            if((vec2[i] < vec1[i])) {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";

    return 0;
}