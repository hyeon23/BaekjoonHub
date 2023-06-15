#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int gcd(int x, int y){
    if(x % y == 0){
        return y;
    }
    else{
        return gcd(y, x % y);
    }
}

int lcm(int x, int y){
    return x * y / gcd(x, y);
}

int main(){
    int N;
    vector<int> vec, dist;
    cin >> N;

    for(int i = 0; i < N; ++i){
        int dist;
        cin >> dist;
        vec.push_back(dist);
    }

    sort(vec.begin(), vec.end());

    for(int i = 1; i < vec.size(); ++i){
        dist.push_back(vec[i] - vec[i - 1]);
    }

    int curGCD = dist[0];

    for(int i = 1; i < dist.size() - 1; ++i){
        curGCD = gcd(curGCD, dist[i]);
    }

    int count = 0;

    for(int i = 0; i < N - 1; ++i){
        count += (dist[i] / curGCD) - 1;
    }

    cout << count;
}