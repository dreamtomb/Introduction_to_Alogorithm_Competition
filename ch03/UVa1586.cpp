#include <iostream>
#include <cstdlib>
#include <memory>
#include <cctype>
#include <cstring>
#include <cstdio>
using namespace std;

#define maxn 105
const char name[] = "CHON";
const double mass[] = {12.01, 1.008, 16.00, 14.01};
double answer[maxn];

int main()
{
    memset(answer, 0, sizeof(answer));
    int kase;
    cin >> kase;
    for (int i = 0; i < kase; i++)
    {
        char c[5];
        string s;
        cin >> s;
        double sum = 0.0, weight = 0.0;
        int num = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
            {
                for (int j = 0; j < 4; j++)
                    if (s[i] == name[j])
                    {
                        weight = mass[j];
                        break;
                    }
                num = 0;
                if (isalpha(s[i + 1]) || i + 1 == s.size())
                    sum += weight;
                else
                {
                    for (int k = i + 1; k < s.size() && isdigit(s[k]); k++)
                        c[num++] = s[k];
                    sum += atof(c) * weight;
                }
                memset(c, '\0', sizeof(c));
            }
            else
                continue;
        }
        answer[i] = sum;
    }
    for (int i = 0; i < kase; i++)
    {
        printf("%.3f\n", answer[i]);
    }
    return 0;
}