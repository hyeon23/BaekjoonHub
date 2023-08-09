#include <sstream>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int T;
    cin >> T;
    cin.ignore();

    while(T--){    
        vector<string> vec;
        string tmp;
        
        getline(cin, tmp);
        stringstream ss(tmp);
        string tmp2;
        while(ss >> tmp2)
            vec.push_back(tmp2);

        while(true){
            getline(cin, tmp);
            
            if(tmp.compare("what does the fox say?") == 0)
                break;
            stringstream ss2(tmp);
            string ani, goes, sounds;
            ss2 >> ani >> goes >> sounds;
            while(find(vec.begin(), vec.end(), sounds) != vec.end())
                vec.erase(find(vec.begin(), vec.end(), sounds));
        }

        for(auto i : vec)
            cout << i << ' ';
        
        cout << '\n';
    }
}