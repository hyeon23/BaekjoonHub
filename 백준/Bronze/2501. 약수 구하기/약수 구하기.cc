#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, K;
    vector<int> vec;
    cin >> N >> K;

    for(int i = 1; i<= N; ++i){
        if(N % i == 0){
            vec.push_back(i);
        }
    }

    if(vec.size() < K){
        cout << 0;
    }
    else{
        cout << vec[K-1];
    }
}