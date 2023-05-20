#include <iostream>
using namespace std;

int main(){
    int N, M;

    cin >> N >> M;

    int outputArr[N][M] = {};

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            int tempvalue;

            cin >> tempvalue;

            outputArr[i][j] = outputArr[i][j] + tempvalue;
        }
    }

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            int tempvalue;

            cin >> tempvalue;

            outputArr[i][j] = outputArr[i][j] + tempvalue;
        }
    }

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            cout << outputArr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}