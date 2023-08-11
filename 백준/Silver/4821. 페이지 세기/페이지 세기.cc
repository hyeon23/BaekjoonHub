#include <sstream>
#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int s;

    while(true){
        cin >> s;
        if(s == 0) break;

        set<int> set;
        string tmp;
        cin >> tmp;
        stringstream ss(tmp);
        string tmp2;
        while(getline(ss, tmp2, ',')){
            int index = tmp2.find('-');

            if(index == string::npos){
                string start(tmp2.begin(), tmp2.end());
                
                if(stoi(start) > s)
                    continue;
                
                set.insert(stoi(start));
            }
            else{
                string start(tmp2.begin(), tmp2.begin() + index);
                string end(tmp2.begin() + index + 1, tmp2.end());
                
                for(int i = stoi(start); i <= stoi(end); ++i){
                    if(i > s)
                        break;

                    set.insert(i);
                }
            }
        }

        cout << set.size() << '\n';
    }

    
}