#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    int sum = 0;
    string toS;

    cin >> N;

    for(int i = 1; i <= N; ++i){

        int sum = i;

        toS = to_string(i);

        for(int j = 0; j < toS.size(); ++j){
            sum += toS[j] - '0';
        }

        if(sum == N){
            cout << i;
            break;
        }

        if(i == N){
            cout << 0;
        }
    }
}