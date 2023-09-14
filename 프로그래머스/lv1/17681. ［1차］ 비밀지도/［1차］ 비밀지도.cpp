#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2)
{
    vector<int> arr;
    for(int i = 0; i < n; ++i){
        arr.push_back(arr1[i] | arr2[i]);
    }
    
    vector<string> svec;
    for(int i = 0; i < arr.size(); ++i){
        string str;
        while(arr[i] > 0){
            if(arr[i] % 2 == 0) str += " ";
            else str += "#";
            arr[i] /= 2;
        }
        
        while(str.size() != n){
            str = str + " ";
        }
        
        reverse(str.begin(), str.end());
        cout << str << '\n';
        svec.push_back(str);
    }
    
    return svec;
}