#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n;
vector<pair<int, int>> arr;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second>b.second;
}

//1 13
//3 10
//2 8

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i=0 ; i<n ; i++) {
        int a, b;
        cin >> a >> b;
        arr.push_back({a, b});
    }

    sort(arr.begin(), arr.end(), cmp);
    int now=arr[0].second-arr[0].first;
    for(int i=1 ; i<n ; i++) {
        int d=arr[i].first, t=arr[i].second;
        if(now>=t) {
            now = t-d;
        } else {
            now = now-d;
        }
    }
    cout << now;
    
    return 0;
}