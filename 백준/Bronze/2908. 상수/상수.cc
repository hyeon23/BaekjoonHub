#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A, B;

    cin >> A >> B;

    int answer;

    swap(A[0], A[2]);
    swap(B[0], B[2]);

    answer = max(stoi(A), stoi(B));

    cout << answer;

    return 0;
}