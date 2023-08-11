#include <iostream>
#include <cstring>
#include <queue>
#include <cmath>

using namespace std;

int main(void)
{
    char arr[30];
    cin>>arr;
    int arr_len = strlen(arr);
    int acc = 0;
    queue<char> que;
    for(int i = 0; i< arr_len;i++)
    {
        if(arr[i] == 'x')
        {
            int is_plus = 1;
            if( !que.empty() &&(que.front() == '-' ||que.front() == '+') )
            {
                if(que.front() == '-')
                    is_plus = -1;
                que.pop();
            }
            if(que.empty())
            {
                acc = acc + is_plus;
            }
            while(!que.empty())
            {
                int add = (que.front() - 48) * pow(10,que.size()-1);
                acc = acc + is_plus * add;
                que.pop();
            }
        }
        else if(!( 48 <= arr[i] && arr[i]<= 57))
        {
            while(!que.empty())
            {
                que.pop();
            }
            
        }
        que.push(arr[i]);
    }
    cout<<acc;
}