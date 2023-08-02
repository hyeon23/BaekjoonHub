#include <vector>
#include <iostream>
using namespace std;

vector<int> vec(100001, 0);

int ycount(int N) {
    if (vec[N])
        return vec[N];

    int cnt = 2;
    for (int i = 2; i * i <= N; ++i) {
        if (N % i == 0) {
            cnt += (i == N / i) ? 1 : 2;  // Count both divisors if they are distinct.
        }
    }

    vec[N] = cnt;
    return vec[N];
}

int solution(int number, int limit, int power) {
    int answer = 0;

    vec[0] = 0;
    vec[1] = 1;
    vec[2] = 2;

    for (int i = 1; i <= number; ++i) {
        int tmp = ycount(i);
        cout << tmp << '\n';
        answer += (tmp > limit) ? power : tmp;
    }
    return answer;
}

int main() {
    int number = 16, limit = 2, power = 3;
    int result = solution(number, limit, power);
    cout << "Result: " << result << endl;
    return 0;
}