#include <iostream>
#include <cmath>

using namespace std;

void cantor(int N){
    int size = pow(3, N - 1);

    // N = 0 인 경우 "-" 출력
    if(N == 0){
        cout << "-";
        return;
    }

    // N번째 칸토어 집합 = N -1 번째 칸토어 집합을 2개 이은 것
    cantor(N - 1);

    // 사이에 공백이 N - 1번째 칸토어 집합의 사이즈만큼 있어야 함
    for(int i = 0; i < size; ++i)
        cout << " ";

    cantor(N - 1);
}

int main(){
    int N;
    while(cin >> N){
        cantor(N);
        cout << '\n';
    }

    return 0;
}