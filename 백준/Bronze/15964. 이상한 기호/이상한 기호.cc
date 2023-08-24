#include <bits/stdc++.h>
using namespace std;

int answer(int A, int B){
    return (A + B) * (A - B);
}

int main(){
    int A, B;
    cin >> A >> B;
    cout << answer(A, B);
}