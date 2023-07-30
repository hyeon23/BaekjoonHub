#include <string>
#include <vector>
using namespace std;

bool isprime(unsigned long long n)
{
    for (unsigned long long i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return (n != 1) ? true : false;
}

int solution(int n, int k)
{
    int answer = 0;
    int tmpn = n;
    string tmp = "";
    while (tmpn > 0)
    {
        tmp = to_string(tmpn % k) + tmp;
        tmpn /= k;
    }
    string tmpp = "";
    for (unsigned long long i = 0; i < tmp.size(); ++i)
    {
        if (tmp[i] != '0')
        {
            tmpp += tmp[i];
            if (i == tmp.size() - 1)
                if (isprime(stoll(tmpp))){
                    answer++;
                }    
        }
        else
        {
            if (tmpp != "")
            {
                if (isprime(stoi(tmpp))){
                    answer++;
                }
                tmpp = "";
            }
        }
    }
    return answer;
}