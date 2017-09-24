#include <cstdio>
#include <cstring>

#define maxn 85

char s[maxn];
int main()
{
    int count = 0;
    while (scanf("%s", s) == 1)
    {
        int flag = 0, ans = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == 'X')
                flag = 0;
            else
                flag += 1;
            ans += flag;
        }
        printf("Case %d:\nscore = %d", ++count, ans);
    }
    return 0;
}