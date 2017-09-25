#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

#define maxn 105
char a[maxn], b[maxn];
int num_a[26], num_b[26];

int main()
{
    memset(num_a, 0, sizeof(a));
    memset(num_b, 0, sizeof(b));
    scanf("%s", a);
    scanf("%s", b);
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        num_a[int(a[i]) - 65]++;
        num_b[int(b[i]) - 65]++;
    }
    sort(num_a, num_a + 26);
    sort(num_b, num_b + 26);
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (num_a[i] != num_b[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}