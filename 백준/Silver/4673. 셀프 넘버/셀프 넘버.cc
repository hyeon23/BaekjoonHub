#include <iostream>
 
using namespace std;
 
int sum(int number) {
	int sum = number;
 
	while (number != 0) {
		sum = sum + (number % 10); // 첫 째 자리수ˇ
		number = number / 10;	   // 10을 나누어 첫 째 자리를 없앤다.
	}
	return sum;
}
 
 
int main() {
	bool check[10001] = { false, };
    
	for (int i = 1; i < 10001; i++) {
		int n = sum(i);

		if (n < 10001) { // 10000 이 넘는 수는 필요가 없다.
			check[n] = true;
		}
	}

	for (int i = 1; i < 10001; i++) {
		if (!check[i]) {
			cout << i << "\n";
		}
	}
 
	return 0;
}