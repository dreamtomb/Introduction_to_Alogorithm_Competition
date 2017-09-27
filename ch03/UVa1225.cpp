#include <cstdio>
#include <cstring>

#define maxn 10005
// 误！理解错了题意（明日更新）
char s[maxn];
int main()
{
    scanf("%s", s);
    int num[10];
    memset(num, 0, sizeof(num));
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        switch (s[i])
        {
        case '0':
            num[0]++;
            break;
        case '1':
            num[1]++;
            break;
        case '2':
            num[2]++;
            break;
        case '3':
            num[3]++;
            break;
        case '4':
            num[4]++;
            break;
        case '5':
            num[5]++;
            break;
        case '6':
            num[6]++;
            break;
        case '7':
            num[7]++;
            break;
        case '8':
            num[8]++;
            break;
        case '9':
            num[9]++;
            break;
        }
    }
}