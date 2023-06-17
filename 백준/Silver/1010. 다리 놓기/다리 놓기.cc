#include<iostream>
using namespace std;
int t;
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> t;
	while (t--) {
		long long int ans = 1;
		int r = 1;
		int n, m;
		cin >> n >> m;
		int i = m;
		int j = n;
		while (j--) {
			ans *= i--;
			ans /= r++;
		}
		cout << ans<<"\n";
	}
}