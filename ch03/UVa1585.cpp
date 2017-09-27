#include <cstdio>
#include <cstring>

#define maxn 85

char s[maxn];
int answer[85];
int main()
{
    int kase;
    memset(answer, 0, sizeof(answer));
    scanf("%d", &kase);
    for (int i = 0; i < kase; i++)
    {
        scanf("%s", s);
        int flag = 0, ans = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == 'X')
                flag = 0;
            else
                flag += 1;
            ans += flag;
        }
        answer[i] = ans;
    }
    for (int i = 0; i < kase; i++)
    {
        printf("%d\n", answer[i]);
    }
    return 0;
}