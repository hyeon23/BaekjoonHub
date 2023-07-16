using namespace std;

long long solution(int price, int money, int count)
{
    long long p = 0;
    for(int i = 1; i <= count; ++i)
        p += i * price;
    return money >= p ? 0 : p - money;
}