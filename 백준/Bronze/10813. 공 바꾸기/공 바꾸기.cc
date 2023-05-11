#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m;
    int* bas = new int[n+1];
    for(int i = 1; i <= n; ++i){
        bas[i] = i;
    }
            
    while(m--){
        cin >> a >> b;
        swap(bas[a], bas[b]);
    }
    for(int i = 1; i <= n; ++i){
        cout << bas[i] << ' ';
    }

    return 0;
}