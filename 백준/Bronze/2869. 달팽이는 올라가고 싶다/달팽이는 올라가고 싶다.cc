#include <iostream>
using namespace std;

int main()
{
    int A, B, V;
    int day = 1;
    cin >> A >> B >> V;

    day += (V - A) / (A - B);

    if((V - A) % (A - B) != 0)
        day+= 1;
    cout << day;
}