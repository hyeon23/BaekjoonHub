#include <iostream>
using namespace std;

int T, N;
long long waves[101] = {0, 1, 1, 1, 2, };

long long Waves(int N){
    if(N == 0 || N == 1 || N == 2 || N == 3 || N == 4)
        return waves[N];
    else if(waves[N] == 0)
        waves[N] = Waves(N - 5) + Waves(N - 1);
    return waves[N];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> T;
    while(T--){
        cin >> N;
        cout << Waves(N) << '\n';
    }
}