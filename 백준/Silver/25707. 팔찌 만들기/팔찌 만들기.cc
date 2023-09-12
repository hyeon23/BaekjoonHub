#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    //줄을 적게 -> 글짜간 차이가 적게
    //1 3 5 7 9
    
    vector<int> vec(N);

    for(int i = 0; i < N; ++i)
        cin >> vec[i];

    sort(vec.begin(), vec.end());

    int sum = 0;

    for(int i = 1; i < vec.size(); ++i){
        sum += abs(vec[i] - vec[i-1]);
    }



    sum += abs(vec[0] - vec[vec.size()-1]);

    cout << sum;
}