#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[2000002];

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n ; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int result = 0;
    for(int i=0; i<(n+1)/2; i++){
        result += int(log2(arr[i]));
    }
    cout << result+1;
    
   
}