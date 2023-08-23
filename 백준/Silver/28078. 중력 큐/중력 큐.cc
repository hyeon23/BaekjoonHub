#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int Q;
    string cmd1;
    char cmd2;
    cin >> Q;
    
    int Dir = 0;
    int B = 0, W = 0;
    deque<char> DQ;

    for (int i = 0; i < Q; ++i) {
        cin >> cmd1;
        if (cmd1 == "push") {
            cin >> cmd2;
            if ((Dir == 0) || (Dir == 2)) {
                DQ.push_front(cmd2);
                if (cmd2 == 'b') {
                    B++;
                } else if (cmd2 == 'w') {
                    W++;
                }
            } else if (Dir == 1) {
                if (cmd2 == 'b') {
                    if (!DQ.empty() && DQ.back() == 'w') {
                        DQ.push_front(cmd2);
                        B++;
                    }
                } else if (cmd2 == 'w') {
                    DQ.push_front(cmd2);
                    W++;
                }
            } else if (Dir == 3) {
                if (cmd2 == 'w') {
                    DQ.push_front(cmd2);
                    W++;
                }
            }
        } else if (cmd1 == "pop") {
            if (!DQ.empty()) {
                if (Dir == 1) {
                    if (DQ.back() == 'w') {
                        DQ.pop_back();
                        W--;
                        while (!DQ.empty()) {
                            if (DQ.back() == 'b') {
                                DQ.pop_back();
                                B--;
                            } else {
                                break;
                            }
                        }
                    }
                } else {
                    if (DQ.back() == 'b') {
                        B--;
                    } else if (DQ.back() == 'w') {
                        W--;
                    }
                    DQ.pop_back();
                }
            }
        } else if (cmd1 == "rotate") {
            cin >> cmd2;
            if (cmd2 == 'l') {
                Dir--;
                if (Dir == -1) {
                    Dir = 3;
                }
            } else if (cmd2 == 'r') {
                Dir++;
                if (Dir == 4) {
                    Dir = 0;
                }
            }
            if (Dir == 1) {
                while (!DQ.empty() && DQ.back() == 'b') {
                    DQ.pop_back();
                    B--;
                }
            } else if (Dir == 3) {
                while (!DQ.empty() && DQ.front() == 'b') {
                    DQ.pop_front();
                    B--;
                }
            }
        } else if (cmd1 == "count") {
            cin >> cmd2;
            if (cmd2 == 'b') {
                cout << B << '\n';
            } else if (cmd2 == 'w') {
                cout << W << '\n';
            }
        }
    }

    return 0;
}