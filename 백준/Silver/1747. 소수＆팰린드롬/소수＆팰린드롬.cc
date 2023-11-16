#include <bits/stdc++.h>
using namespace std;

vector<bool> primes(10000000, true);

void eratos(int n){
    primes[0] = false;
    primes[1] = false;
    for(int i = 2; i * i <= n; ++i){
        if(!primes[i]) continue;
        for(int j = 2 * i; j <= n; j += i)
            primes[j] = false;
    }
}

bool is_palindrome(int n){
    string str = to_string(n);
    for(int i = 0; i < str.size() / 2; ++i)
        if(str[i] != str[str.size() - i - 1]) return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    eratos(10000000);
    while(!(is_palindrome(n) && primes[n])) ++n;
    cout << n;
    return 0;
}