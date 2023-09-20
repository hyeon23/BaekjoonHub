// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
//     int N, A, B;
//     cin >> N;

//     vector<int> diff;
//     for(int i = 0; i < N; ++i) { 
//         cin >> A >> B;
//         diff.push_back(B - A);
//     }

//     sort(diff.begin(), diff.end());

//     vector<long long> ans;
//     long long sum = 0;

//     for(int i = diff[0]; i <= diff[diff.size()-1]; ++i){//T 후보군 중 하나씩 탐색
//         for(int j = 0; j < diff.size(); ++j){
//             sum += abs(i-diff[j]);
//         }
//         ans.push_back(sum);
//     }

//     sort(ans.begin(), ans.end());

//     cout << upper_bound(ans.begin(), ans.end(), ans[0]) - lower_bound(ans.begin(), ans.end(), ans[0]);

//     return 0;
// }

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, A, B;
    cin >> N;

    vector<int> diff
    ;
    for(int i = 0; i < N; ++i) { 
        cin >> A >> B;
        diff.push_back(A - B);
    }

    sort(diff.begin(), diff.end());

    if(N%2 == 1){//홀수일 경우 = 1
        cout << 1;
    }
    else{//짝수일 경우 =
        cout << diff[N/2] - diff[N/2-1] + 1;
    }
    return 0;
}