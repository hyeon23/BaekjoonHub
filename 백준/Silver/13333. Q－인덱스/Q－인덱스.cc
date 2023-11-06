#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> citations(n);

    for (int i = 0; i < n; ++i) {
        cin >> citations[i];
    }

    sort(citations.rbegin(), citations.rend());  // Sort the citations in descending order

    int h_index = 0;
    for (int i = 0; i < n; ++i) {
        if (citations[i] >= i + 1) {
            h_index = i + 1;
        } else {
            break;
        }
    }

    cout << h_index << endl;

    return 0;
}