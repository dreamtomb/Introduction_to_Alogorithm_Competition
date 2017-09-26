#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

#define maxn 105
char a[maxn], b[maxn];
int num_a[26], num_b[26];

int main()
{
    int rnd = 100;
    while (rnd--)
    {
        if (getchar() == EOF)
            break;
        memset(num_a, 0, sizeof(a));
        memset(num_b, 0, sizeof(b));
        scanf("%s", a);
        scanf("%s", b);
        int n = strlen(a); //≥§∂»…Ÿ1£°£°why£ø
        printf("%d\n", n);
        for (int i = 0; i < n; i++)
        {
            int tmp1 = int(a[i]) - 65;
            num_a[tmp1]++;
            int tmp2 = int(b[i]) - 65;
            num_b[tmp2]++;
        }
        /*
        for (int i = 0; i < 26; i++) {
            printf("%d", num_a[i]);
        }
        printf("\n");
        for (int i = 0; i < 26; i++) {
            printf("%d", num_b[i]);
        }
        printf("\n");
        */
        sort(num_a, num_a + 26);
        sort(num_b, num_b + 26);

        int flag = 1;
        for (int i = 0; i < 26; i++)
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
    }
    return 0;
}