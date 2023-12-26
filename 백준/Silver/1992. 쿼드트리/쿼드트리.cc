#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> board;

void recursion(int x, int y, int n) {
    if (n == 1) {
        cout << board[x][y];
        return;
    }

    bool isSame = true;
    char firstPixel = board[x][y];

    for (int i = x; i < x + n; ++i) {
        for (int j = y; j < y + n; ++j) {
            if (board[i][j] != firstPixel) {
                isSame = false;
                break;
            }
        }
        if (!isSame) {
            break;
        }
    }

    if (isSame) {
        cout << firstPixel;
    } else {
        cout << "(";
        int half = n / 2;
        recursion(x, y, half);
        recursion(x, y + half, half);
        recursion(x + half, y, half);
        recursion(x + half, y + half, half);
        cout << ")";
    }
}

int main() {
    int N;
    cin >> N;

    board.resize(N, vector<char>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
        }
    }

    recursion(0, 0, N);

    return 0;
}