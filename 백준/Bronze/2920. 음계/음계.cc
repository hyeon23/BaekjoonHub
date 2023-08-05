#include <vector>
#include <iostream>
using namespace std;

int main(){
    bool asct = false, desct = false;
    int num;
    vector<int> vec;
    while(cin >> num)
        vec.push_back(num);

    for(int i = 1; i < vec.size(); ++i){
        if(vec[i - 1] < vec[i])
            asct = true;
        else if(vec[i - 1] > vec[i])
            desct = true;
    }

    if(asct && desct) cout << "mixed";
    else if(asct) cout << "ascending";
    else if(desct) cout << "descending";
}