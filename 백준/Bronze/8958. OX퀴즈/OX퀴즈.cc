#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i = 0; i < N; ++i){
        string tmp;
        cin >> tmp;

        int sum = 0;
        int count = 0;

        for(int i = 0; i < tmp.size(); ++i){

            if(tmp[i] == 'O'){
                sum = sum + (++count);
            }
            else if(tmp[i] == 'X'){
                count = 0;
            }
        }
        cout << sum << '\n';
    }
}