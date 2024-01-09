#include <bits/stdc++.h>
using namespace std;

pair<int , int> hilbert(int N, int M){
    pair<int, int> p;
    if(N == 2){
        switch(M){
            case 0:
                p = {1,1};
                return p;
            case 1:
                p = {1,2};
                return p;
            case 2:
                p = {2,2};
                return p;
            case 3:
                p = {2,1};
                return p;
        }
    }

    int half = N/2;
    int quadrant = M / (half*half);
    switch(quadrant){
        case 0:
            p = hilbert(half, M % (half * half));
            swap(p.first, p.second);
            return p;
        case 1:
            p = hilbert(half, M % (half * half));
            p.second += half;
            return p;
        case 2:
            p = hilbert(half, M % (half * half));
            p.first += half;
            p.second += half;
            return p;
        case 3:
            p = hilbert(half, M % (half * half));
            pair<int, int> temp = {2 * half - p.second + 1, half - p.first + 1};
            return temp;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, M;
    cin >> N >> M;
    pair<int, int> result = hilbert(N, M-1);
    cout << result.first << ' ' << result.second << '\n';
    return 0;
}