#include <cstdio>
using namespace std;

int main(void)
{
    int t;
    while (scanf("%d", &t), t != -1)
    {
        int a[106], count = 1;
        a[0] = t;
        int ans = 0;
        while (1)
        {
            scanf("%d", &a[count++]);
            if (a[count - 1] == 0)
            {
                count--;
                break;
            }
        }
        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < count; j++)
            {
                if (a[i] == a[j] * 2)
                {
                    ans++;
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}