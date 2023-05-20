#include <iostream>
using namespace std;

char a[5][16];  //1)

int main(){
  for(int i=0; i<5; i++)  //2)
    cin>>a[i];
  
  for(int k=0; k<15; k++)  //3)
  {
    for(int i=0; i<5; i++)  //4)
    {
      if(a[i][k] != '\0')  //5)
        cout<<a[i][k];
    }
  }
}