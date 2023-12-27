#include <bits/stdc++.h>
using namespace std;
int N;
void move(int n, int start, int end){
    cout << start << ' ' << end << '\n';
}
void hanoi(int n, int start, int end, int sub){
    if(n == 1) {
        move(1, start, end);
        return;
    }
    hanoi(n-1, start, sub, end);
    move(1, start, end);
    hanoi(n-1, sub, end, start);
}

int main(){
    //unsigned long long int의 범위를 벗어난다(pow(2, 100) => 다른방식 필요)
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> N;
    string s = to_string(pow(2, N));
    int finddot = s.find('.');
    s = s.substr(0,finddot);
    s[s.length() -1] -= 1;
    cout << s << '\n';
    if(N <= 20) hanoi(N, 1, 3, 2);
    return 0;
}