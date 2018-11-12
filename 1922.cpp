#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    while(scanf("%d",&n),n){
        double ans = 1e100;
        while(n--){
            double t,v,tans;
            scanf("%lf%lf",&v,&t);
            if(t >= 0) {tans = t + (4.5/v)*3600;
            ans = ans < tans ? ans : tans;}
        }
        printf("%.0f\n",ceil(ans));
    }
    return 0;
}