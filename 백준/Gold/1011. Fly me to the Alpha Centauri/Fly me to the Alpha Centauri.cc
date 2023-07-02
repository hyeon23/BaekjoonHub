#include <cmath>
#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    
    while(T--){
        long long int x, y, move, max = 0;
        cin >> x >> y;
        while(max * max <= y - x)
            max++;
        max--;
        move = 2 * max - 1;
        long long rem = y - x - max * max;
        rem = (long long)ceil((double)rem / (double)max);
        move += rem;
        cout << move << '\n';
    }

    return 0;
}