#include <iostream>
using namespace std;

int main(){
    int x, y, w, h;

    cin >> x >> y >> w >> h;

    cout << min(x, min(w-x, min(y, h-y)));
}