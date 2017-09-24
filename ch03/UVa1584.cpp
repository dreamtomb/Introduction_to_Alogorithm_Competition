#include <cstdio>
#include <cstring>

#define maxn 105

//判断环装状s的表示法p是否比表示法q的字典序更小
int less(const char *s, int p, int q)
{
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[(p + i) % n] != s[(q + i) % n])
        {
            return s[(p + i) % n] < s[(q + i) % n];
        }
    }
    return 0;
}

int main()
{
    int T;
    char s[maxn];
    scanf("%d", &T);
    while (T--)
    {
        scanf("%s", s);
        int ans = 0;
        int n = strlen(s);
        //相当于寻找最小值（将最小字典序的首位置存储通过选择排序类似的思路存储在ans中
        for (int i = 1; i < n; i++)
        {
            if (less(s, i, ans))
                ans = i;
        }
        for (int i = 0; i < n; i++)
        {
            putchar(s[(i + ans) % n]);
        }
        putchar('\n');
    }
    return 0;
}