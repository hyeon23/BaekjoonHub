#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string str;
    map<string, int> wl;

    double total = 0;
    while(getline(cin, str)){
        stringstream ss(str);
        string tmp;
        while(ss >> tmp){
            wl[tmp]++;
            total += 1;
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << "Re "  << wl["Re"] << " " << fixed << setprecision(2) << wl["Re"] / total << '\n';
    cout << "Pt "  << wl["Pt"] << " " << fixed << setprecision(2) << wl["Pt"] / total << '\n';
    cout << "Cc "  << wl["Cc"] << " " << fixed << setprecision(2) << wl["Cc"] / total << '\n';
    cout << "Ea "  << wl["Ea"] << " " << fixed << setprecision(2) << wl["Ea"] / total << '\n';
    cout << "Tb "  << wl["Tb"] << " " << fixed << setprecision(2) << wl["Tb"] / total << '\n';
    cout << "Cm "  << wl["Cm"] << " " << fixed << setprecision(2) << wl["Cm"] / total << '\n';
    cout << "Ex "  << wl["Ex"] << " " << fixed << setprecision(2) << wl["Ex"] / total << '\n';
    cout << "Total " << (int)total << " " << "1.00";
    return 0;
}