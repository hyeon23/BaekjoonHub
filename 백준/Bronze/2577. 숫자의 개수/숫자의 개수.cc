#include <string>
#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    string mul;
    int arr[10] = { 0, };
    cin >> A >> B >> C;

    mul = to_string(A * B * C);

    for(int i = 0; i < mul.size(); ++i){
        arr[mul[i] - '0']++;
    }

    for(int i = 0; i < 10; ++i){
        cout << arr[i] << '\n';
    }
}