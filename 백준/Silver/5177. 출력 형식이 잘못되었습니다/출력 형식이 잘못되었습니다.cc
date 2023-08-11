#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int K;
    cin >> K;
    cin.ignore();

    int tt = 0;

    while(K--){
        ++tt;
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);

        string ans1;
        string ans2;

        string str1 = "", str2 = "";

        str1 += s1[0];
        str2 += s2[0];

        for(int i = 1; i < s1.size(); ++i){
            if(s1[i-1] == ' ' && s1[i] == ' ')
                continue;
            else
                str1 += s1[i];
        }

        for(int i = 1; i < s2.size(); ++i){
            if(s2[i-1] == ' ' && s2[i] == ' ')
                continue;
            else
                str2 += s2[i];
        }

        for(int i = 0; i < str1.size(); ++i){
            if(str1[i] == ' '){
                if(i == 0 || i == str1.size() - 1);
                else if((isalpha(str1[i - 1]) || isdigit(str1[i - 1])) && (isalpha(str1[i + 1]) || isdigit(str1[i + 1])))
                    ans1 += ' ';    
            }
            else if(str1[i] == ',' || str1[i] == ';'){
                ans1 += ',';
            }
            else if(str1[i] == '(' || str1[i] == '{' || str1[i] == '['){
                ans1 += '(';
            }
            else if(str1[i] == ')' || str1[i] == '}' || str1[i] == ']'){
                ans1 += ')';
            }
            else{
                if(isalpha(str1[i]))
                    ans1 += tolower(str1[i]);
                else
                    ans1 += str1[i];
            }
        }

        for(int i = 0; i < str2.size(); ++i){
            if(str2[i] == ' '){
                if(i == 0 || i == str2.size() - 1);
                else if((isalpha(str2[i - 1]) || isdigit(str2[i - 1])) && (isalpha(str2[i + 1]) || isdigit(str2[i + 1])))
                    ans2 += ' ';    
            }
            else if(str2[i] == ',' || str2[i] == ';'){
                ans2 += ',';
            }
            else if(str2[i] == '(' || str2[i] == '{' || str2[i] == '['){
                ans2 += '(';
            }
            else if(str2[i] == ')' || str2[i] == '}' || str2[i] == ']'){
                ans2 += ')';
            }
            else{
                if(isalpha(str2[i]))
                    ans2 += tolower(str2[i]);
                else
                    ans2 += str2[i];
            }
        }

        cout << "Data Set " << tt << ": ";
        if(ans1 == ans2) cout << "equal" << '\n';
        else cout << "not equal" << '\n';
        cout << '\n';
    }
}