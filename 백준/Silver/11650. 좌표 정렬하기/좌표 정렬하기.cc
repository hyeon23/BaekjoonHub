#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    //sol2: <vector> vector의 sort -> x 기준 정렬 후, y 기준 정렬
    int N;
    cin >> N;
    vector<vector<int>> arr(N, vector<int>(2, 0));
    for(int i = 0; i < N; ++i){
        cin >> arr[i][0] >> arr[i][1];
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); ++i){
        cout << arr[i][0] << " " << arr[i][1] << '\n';
    }
}