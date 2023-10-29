#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(vector<int> &num) {
    int left = 0;
    int right = num.size() - 1;
    
    while (left < right) {
        if (num[left] != num[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int num;
        cin >> num;

        bool trigger = false;

        for (int B = 2; B <= 64; ++B) {
            int copy = num;

            vector<int> tmp;

            while (copy != 0) {
                tmp.push_back(copy % B);
                copy /= B;
            }

            if (is_palindrome(tmp)) {
                cout << 1 << '\n';
                trigger = true;
                break;
            }
        }

        if (!trigger) {
            cout << 0 << '\n';
        }
    }

    return 0;
}