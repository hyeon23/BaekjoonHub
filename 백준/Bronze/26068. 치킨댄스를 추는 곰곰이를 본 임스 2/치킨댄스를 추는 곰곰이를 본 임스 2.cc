#include <string>
#include <iostream>
using namespace std;

int main(){
    int N, count = 0;
    cin >> N;
    while(N--){
        string tmp, t = "";
        cin >> tmp;
        for(int i = 0; i < tmp.size(); ++i){
            if(isdigit(tmp[i]))
                t += tmp[i];
        }

        if(stoi(t) <= 90) ++count;
    }
    cout << count;
}