#include <bits/stdc++.h>
using namespace std;

struct person{
    string name;
    int day;
    int mon;
    int year;
};

bool cmp(person A, person B){
    if(A.year == B.year){
        if(A.mon == B.mon){
            return A.day > B.day;
        }
        return A.mon > B.mon;
    }
    return A.year > B.year;
}

int main(){
    int n, day, mon, year;
    string name;
    cin >> n;
    vector<person> vec(n);
    for(int i = 0; i < n; ++i){
        cin >> name >> day >> mon >> year;
        vec[i] = {name, day, mon, year};
    }

    sort(vec.begin(), vec.end(), cmp);
    cout << vec[0].name << '\n';
    cout << vec[vec.size() - 1].name << '\n';
    return 0;
}