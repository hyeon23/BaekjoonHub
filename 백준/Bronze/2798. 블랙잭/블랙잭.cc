#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M, x, sum;
    vector<int> vec;

    cin >> N >> M;

    while(N--){
        cin >> x;
        vec.push_back(x);
    }

    //index i, j, k
    sum = -1;

    for(int i = 0; i < vec.size() - 2; ++i){
        for(int j = i + 1; j < vec.size() - 1; ++j){
            for(int k = j + 1; k < vec.size(); ++k){
                if(vec[i] + vec[j] + vec[k] > M)
                    continue;
                else
                    sum = max(sum, vec[i] + vec[j] + vec[k]);
            }
        }
    }

    cout << sum;
}