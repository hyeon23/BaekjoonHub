#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    int N;
    string str;
    stack<char> skillsA;
    stack<char> skillsB;
    cin >> N >> str;
    int count = 0;
    for(int i = 0; i < str.size(); ++i){
        if(str[i] >= '1' && str[i] <= '9')
            count++;
        else {
            if(str[i] == 'L')
                skillsA.push(str[i]);
            else if(str[i] == 'R'){
                if(skillsA.empty())
                    break;
                else{
                    if(skillsA.top() == 'L'){
                        count++;
                        skillsA.pop();
                    }
                    else
                        break;
                }
            }
            else if(str[i] == 'S')
                skillsB.push(str[i]);
            else if(str[i] == 'K'){
                if(skillsB.empty())
                    break;
                else{
                    if(skillsB.top() == 'S'){
                        count++;
                        skillsB.pop();
                    }
                    else
                        break;
                }
            }
        }
    }
    cout << count;
}