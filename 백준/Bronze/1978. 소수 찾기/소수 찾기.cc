#include <iostream>
#include <vector>

using namespace std;

bool check_prime(int X){
    if(X == 1){
        return false;
    }
    else if(X == 2){
        return true;
    }
    else{
        for(int i = 2; i <= X / 2; ++i){
            if(X % i == 0)
                return false;
        }
    }
    return true;
}

int main(){
    int N;
    int count = 0;
    cin >> N;

    for(int i = 0; i < N; ++i){
        int x;
        cin >> x;
        //check_prime: 
        //1과 자기 자신 외에 약수가 존재하지 않는 수
        //1은 제외

        if(check_prime(x)){
            count++;
        }
    }

    cout << count;

    return 0;
}