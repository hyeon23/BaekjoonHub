#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool is_prime(int _value){
    if(_value == 1){
        return false;
    }
    else if(_value == 2){
        return true;
    }
    else{
        for(int i = 2; i <= _value / 2; ++i){
            if(_value % i == 0)
                return false;
        }
    }
    return true;
}

int main(){
    int M, N;
    int sum = 0;
    vector<int> vec;

    cin >> M >> N;

    for(int i = M; i <= N; ++i){
        if(is_prime(i)){
            vec.push_back(i);
        }
    }

    if(vec.size() == 0){
        cout << -1;
    }
    else{
        sort(vec.begin(), vec.end());

        for(auto data : vec){
            sum += data;
        }

        cout << sum << endl;
        cout << vec[0];
    }
}