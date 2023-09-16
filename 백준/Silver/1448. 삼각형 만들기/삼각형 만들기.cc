#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    vector<int> vec(N);
    
    for (int i = 0; i < N; ++i)
        cin >> vec[i];

    sort(vec.begin(), vec.end(), greater<int>());

    int max_sum = -1;

    for (int i = 0; i < N - 2; ++i) {
        if (vec[i] < vec[i + 1] + vec[i + 2]) {
            max_sum = vec[i] + vec[i + 1] + vec[i + 2];
            break;
        }
    }

    cout << max_sum;
    return 0;
}