#include <iostream>
using namespace std;

//최대공약수
long long gcd(long long m, long long n)
{
	if (n == 0)
		return m;
    else
	    return gcd(n, m % n);
}

//최소공배수
long long lcm(long long m, long long n)
{
	return m * n / gcd(m, n);
}

int main()
{
	long long a, b;
		
	cin >> a >> b;
		
	cout << lcm(a, b) << endl;
	return 0;
}
