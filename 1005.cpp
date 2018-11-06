#include<cstdio>
#include<cmath>
#define pi acos(-1.0)
using namespace std;
int main(void)
{
    int flag = 0;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double x,y;
        scanf("%lf%lf",&x,&y);
        double ans = (x*x+y*y)*pi / 2.0 / 50.0;
        printf("Property %d: This property will begin eroding in year %d.\n",++flag,(int)ceil(ans));
    }
    puts("END OF OUTPUT.");
    return 0;
}