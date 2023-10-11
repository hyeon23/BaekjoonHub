#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    for(int a = 2; a <= 100; ++a){
        for(int b = 2; b < a; ++b){
            for(int c = b+1; c <= 100; ++c){
                for(int d = c+1; d <= 100; ++d){
                    if(a*a*a == b*b*b + c*c*c + d*d*d){
                        cout << "Cube = " << a << ", Triple = (" << b << "," << c << "," << d << ")\n";
                    }
                }
            }   
        }
    }
    return 0;
}