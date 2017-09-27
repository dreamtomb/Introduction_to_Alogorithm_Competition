#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

#define maxn 85

char s[maxn];
int p[maxn];
int ans[maxn];

int main()
{
    int kase;
    memset(ans, 0, sizeof(ans));
    scanf("%d", &kase);
    getchar();
    for (int time = 0; time < kase; time++)
    {
        memset(p, 0, sizeof(p));
        scanf("%s", s);
        int n = strlen(s);
        int j = 0;
        // ÇóÒò×Ó
        for (int i = 1; i <= n; i++)
        {
            if (!(n % i))
                p[j++] = i;
        }
        j = 0;
        for (; p[j] > 0; j++)
        {
            string sstr = s;
            string sub = sstr.substr(0, p[j]);
            string tmp = "";
            for (int k = 1; k <= n / p[j]; k++)
            {
                tmp += sub;
            }
            if (sstr == tmp)
            {
                ans[time] = p[j];
                break;
            }
        }
    }
    for (int time = 0; time < kase - 1; time++)
    {
        printf("%d\n\n", ans[time]);
    }
    printf("%d\n", ans[kase - 1]);
    return 0;
}