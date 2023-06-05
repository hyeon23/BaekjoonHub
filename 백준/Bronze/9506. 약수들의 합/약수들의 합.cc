#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;

    while(true){
        cin >> N;
        int sum = 0;
        vector<int> vec;

        if(N == -1)
            break;

        for(int i = 1; i <= N /2; ++i){
            if(N % i == 0){
                sum += i;
                vec.push_back(i);
            }
                
        }

        if(sum == N){
            cout << N << " = ";
            for(int i = 0; i < vec.size() - 1; ++i){
                cout << vec[i] << " + ";
            }

            cout << vec[vec.size() - 1];
        }
        else{
            cout << N << " is NOT perfect.";
        }
        cout << endl;
    }
}