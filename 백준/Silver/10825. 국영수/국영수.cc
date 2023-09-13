#include <bits/stdc++.h>
using namespace std;

struct stu{
    string name;
    int Kor;
    int Eng;
    int Mat;
};

bool cmp(stu A, stu B){
    if(A.Kor == B.Kor){
        if(A.Eng == B.Eng){
            if(A.Mat == B.Mat){
                return A.name < B.name;
            }
            return A.Mat > B.Mat;
        }
        return A.Eng < B.Eng;
    }
    return A.Kor > B.Kor;
}

int main(){
    string str;
    int N, K, Y, S;
    cin >> N;
    vector<stu> vec;
    for(int i = 0; i < N; ++i){
        cin >> str >> K >> Y >> S;
        vec.push_back({str, K, Y, S});
    }

    sort(vec.begin(), vec.end(), cmp);

    for(int i = 0; i < vec.size(); ++i){
        cout << vec[i].name << '\n';
    }

    return 0;
}