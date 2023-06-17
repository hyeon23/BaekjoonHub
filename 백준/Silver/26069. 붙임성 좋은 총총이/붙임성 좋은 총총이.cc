#include <set>
#include <string>
#include <iostream>

using namespace std;

int main(){
    int N;
    string a, b;
    bool triggered = false;
    set<string> ccs;

    cin >> N;

    ccs.insert("ChongChong");

    for(int i = 0; i < N; ++i){
        cin >> a >> b;

        if(ccs.find(a) != ccs.end() || ccs.find(b) != ccs.end()){
            ccs.insert(a);
            ccs.insert(b);
        }
    }

    cout << ccs.size();
}