#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int C, N;
    int sum = 0;
    float average = 0.f;
    vector<float> grade;
    cin >> C;

    while(C--){
        cin >> N;
        
        vector<int> fellaGrade;

        for(int i = 0; i < N; ++i){
            int tempGrade;

            cin >> tempGrade;

            fellaGrade.push_back(tempGrade);

            sum += tempGrade;
        }

        average = (float)sum / (float)N;

        int count = 0;

        for(int i = 0; i < N; ++i){
            if(fellaGrade[i] > average){
                count++;
            }
        }
        
        grade.push_back((float)count / (float)N * 100);

        average = 0;
        sum = 0;
    }

    

    for(int i = 0; i < grade.size(); ++i){
        cout << fixed;
        cout.precision(3);
        cout << grade[i] << "%" << "\n";
    }

    return 0;
}