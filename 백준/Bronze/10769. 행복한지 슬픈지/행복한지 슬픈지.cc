#include <string>
#include <iostream>
using namespace std;

int main(){
    int hcount = 0, scount = 0;
    int hi = 0, si = 0;
    string tmp;
    getline(cin, tmp);

    while(tmp.find(":-)", hi) != string::npos){
        hi = tmp.find(":-)", hi) + 4;
        ++hcount;
    }
    
    while(tmp.find(":-(", si) != string::npos){
        si = tmp.find(":-(", si) + 4;
        ++scount;
    }

    if(hcount > scount)
        cout << "happy";
    else if(hcount < scount)
        cout << "sad";
    else if(hcount == 0 && scount == 0)
        cout << "none";
    else
        cout << "unsure";
}