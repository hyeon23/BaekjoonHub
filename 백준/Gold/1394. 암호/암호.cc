#include<stdio.h>
#include<string.h>
int ans, len, pos[200], cnt, g;
char key, data[1000010];
int main()
{
    int i;
    while (1)
    {
        scanf("%c", &key);
        if (key == 10) break;
        pos[key] = ++cnt;
    }
    scanf("%s", &data);
    len = strlen(data);
    g = 1;
    for (i = len - 1; i >= 0; i--)
    {
        ans = (ans + g*pos[data[i]]) % 900528;
        g = g*cnt % 900528;
    }
    printf("%d", ans);
    return 0;
}