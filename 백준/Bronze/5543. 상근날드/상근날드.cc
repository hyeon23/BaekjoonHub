#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> burgers(3);
    vector<int> um(2);
    cin >> burgers[0] >> burgers[1] >> burgers[2];
    cin >> um[0] >> um[1];
    sort(burgers.begin(), burgers.end());
    sort(um.begin(), um.end());
    cout << burgers[0] + um[0] - 50;
}