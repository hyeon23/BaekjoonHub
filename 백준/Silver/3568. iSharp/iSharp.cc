#include <string>
#include <iostream>
using namespace std;

int main(){
    string tmp;
    string start;
    cin >> start;

    cin.ignore();

    while(cin >> tmp){
        bool t = false;
        string pre = start;
        string varname = "";
        string plus = "";
        for(int i = 0; i < tmp.size(); ++i){
            if(isalpha(tmp[i]))
                varname += tmp[i];
            else if(tmp[i] == '&')
                plus = "&" + plus;
            else if(tmp[i] == '*')
                plus = "*" + plus;
            else if(tmp[i] == '[' && tmp[i + 1] == ']')
                plus = "[]" + plus;
            else if(tmp[i] == ';'){
                t = true;
                break;
            }
        }

        cout << pre + plus << ' ' << varname << ';' << '\n';
        cin.ignore();
        if(t) break;
    }
}