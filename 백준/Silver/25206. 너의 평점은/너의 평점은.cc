#include <iostream>
#include <string>

using namespace std;

int main(){
    float count, sumGrade, sumCount, gradeNum;
    string name, grade;

    int n = 20;

    while(n--){
        cin >> name >> count >> grade;

        if(grade == "A+"){
            gradeNum = 4.5f;
        }
        else if(grade == "A0"){
            gradeNum = 4.0f;
        }
        else if(grade == "B+"){
            gradeNum = 3.5f;
        }
        else if(grade == "B0"){
            gradeNum = 3.0f;
        }
        else if(grade == "C+"){
            gradeNum = 2.5f;
        }
        else if(grade == "C0"){
            gradeNum = 2.0f;
        }
        else if(grade == "D+"){
            gradeNum = 1.5f;
        }
        else if(grade == "D0"){
            gradeNum = 1.0f;
        }
        else if(grade == "F"){
            gradeNum = 0.0f;
        }
        else if(grade == "P"){
            gradeNum = 0.0f;
            count = 0.0f;
        }

        sumGrade += gradeNum * count;

        sumCount += count;
    }

    cout << sumGrade / sumCount;

    return 0;
}