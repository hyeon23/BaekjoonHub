#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool lengthGreater(string a, string b){
    if(a.length() < b.length()){
        return true;
    }
    else if(a.length() == b.length()){
        return a < b;
    }
    else{
        return false;
    }
    return a.length() < b.length();
}

int main(){
    int N;
    cin >> N;
    vector<string> vec;

    for(int i = 0; i < N; ++i){
        string s;
        cin >> s;
        vec.push_back(s);
    }
    sort(vec.begin(), vec.end(), lengthGreater);
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    for(int i = 0; i < vec.size(); ++i){
        cout << vec[i] << endl;
    }
}