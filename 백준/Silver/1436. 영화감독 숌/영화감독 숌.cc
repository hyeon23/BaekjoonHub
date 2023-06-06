#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    int count = 0;
    int number = 0;
    cin >> N;

    for (number = 0; true; number++)
    {
        if (to_string(number).find("666") != string::npos) {
            count++;
        }

        if (count >= N) {
            break;
        }
    }

    cout << number;
    return 0;
} 