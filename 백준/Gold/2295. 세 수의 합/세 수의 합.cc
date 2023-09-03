#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    int arr[1005];
    vector<int> two;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    sort(arr, arr+num);

    for(int i=0;i<num;i++){
        for(int j=i;j<num;j++){
            two.push_back(arr[i] + arr[j]);
        }
    }

    sort(two.begin(), two.end());

    int result = 0;
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(binary_search(two.begin(), two.end(), arr[j]-arr[i])){
                result = max(result, arr[j]);
            }
        }
    }

    cout<<result;
}