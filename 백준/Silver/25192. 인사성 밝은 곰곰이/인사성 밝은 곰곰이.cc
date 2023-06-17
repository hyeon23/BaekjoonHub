#include <set>
#include <iostream>
using namespace std;

int main(){
    int N, count = 0;
    string tmp;
    set<string> set;

    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> tmp;
        if(tmp == "ENTER"){
            count += set.size();
            set.clear();
        }
        else if(i == N - 1){
            set.insert(tmp);
            count += set.size();
            set.clear();
        }
        else{
            set.insert(tmp);
        }
    }

    cout << count;
}