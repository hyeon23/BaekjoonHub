#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;

	for(int i = 0; i < m-1; ++i)
        cout << i << ' ' << m-1 << '\n';

    for(int i = m-1; i < n-1; ++i)
        cout << i << ' ' << i + 1 << '\n';
}