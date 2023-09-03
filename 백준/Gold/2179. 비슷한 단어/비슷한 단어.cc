#include <iostream>
#include <string>
using namespace std;
int main(void){
    string arr[20001];
    int n, l, r;
    int max_size = 0;
    cin >> n;

    for(int i = 0;i<n;i++) cin >> arr[i];

    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] == arr[j]){
                continue;
            }
            int length = min(arr[i].size(),arr[j].size());
            if(length == arr[i].size()){
                int temp = 0;
                for(int k = 0;k<arr[i].size();k++){
                    if(arr[i][k] != arr[j][k]){
                        break;
                    }
                    temp++;
                }
                if(temp > max_size){
                    max_size = temp;
                    l = i;
                    r = j;
                }
            }
           else if(length == arr[j].size()){
               int temp = 0;
               for(int k = 0;k<arr[j].size();k++){
                   if(arr[i][k] != arr[j][k]){
                       break;
                   }
                   temp++;

               }
               if(temp > max_size){
                   max_size = temp;
                   l = i;
                   r = j;
               }
           }                  
        }
    }
     int small = min(l,r);
     int big = max(l,r);

    cout << arr[small] << '\n';
     cout << arr[big];

}