#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    //문자열 무작위 재배열 -> 새로운 문자열 생성(입력 문자열 = 새 재배열 문자열일 수 있음)
    for(int i = 0; i < N; ++i){
        string input, output;
        
        cin >> input >> output;

        vector<int> alphaInput(26, 0);
        vector<int> alphaOutput(26, 0);

        for(int i = 0; i < input.size(); ++i) alphaInput[input[i] - 'a']++;
        for(int i = 0; i < output.size(); ++i) alphaOutput[output[i] - 'a']++;

        bool trigger = false;

        for(int i = 0; i < 26; ++i){
            if(alphaInput[i] != alphaOutput[i]){
                trigger = true;
                break;
            }
        }

        if(trigger) cout << "Impossible" << '\n';
        else cout << "Possible" << '\n';
    }
    return 0;
}
