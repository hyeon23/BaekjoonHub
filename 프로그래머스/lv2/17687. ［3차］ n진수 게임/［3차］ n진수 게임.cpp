#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int n, int t, int m, int p) {
    //n진법 t개
    string answer = "";
    string arr = "0123456789ABCDEF";
    int num = 0;
    unsigned long long int tcount = m - p + 1;
    while(answer.size() != t){
        int cnum = num;
        string tmp = "";
        do{
            tmp = arr[cnum % n] + tmp;
            cnum = cnum / n;
        }while(cnum > 0);
        
        cout << tmp << '\n';
        
        for(int i = 0; i < tmp.size(); ++i){
            if(answer.size() == t)
                break;
            
            //0 1 2 3 4 5 6 7 8 9 10
            //    *     *
            if(tcount % m == 0)
                answer += tmp[i];
            
            tcount++;
        }
        ++num;
    }
    
    return answer;
}