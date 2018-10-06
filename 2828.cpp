#include<cstdio>
using namespace std;

const int maxn = 2e5 + 7;
int sum[maxn<<2],n;
int ans[maxn];
typedef struct{
    int need,id;
}Poi;
Poi temp[maxn];
void pushup(int rt)
{
    sum[rt] = sum[rt<<1] + sum[rt<<1|1];
}
void build(int l,int r,int rt)
{
    if(l == r)
    {
        sum[rt] = 1;
        return;
    }
    int mid = (l+r) >>1;
    build(l,mid,rt <<1);
    build(mid+1,r,rt <<1 |1);
    pushup(rt);
}

void update(int l,int r,int rt,int aim,int tt)
{
    //printf("%d %d\n",l,r);
    if(l == r)
    {
        sum[rt] = 0;
        ans[l] = tt;
        return;
    }
    int mid = (l+r) >> 1;
    if(sum[rt<<1] > aim) update(l,mid,rt <<1 , aim,tt);
    else {aim -= sum[rt<<1];update(mid + 1,r,rt<<1|1,aim,tt);}

    pushup(rt);
}


void solve(void)
{
    while(~scanf("%d",&n))
    {
        build(1,n,1);
        for(int i = 1 ; i <= n ; i++)
            scanf("%d%d",&temp[i].need,&temp[i].id);
        for(int i = n ; i >= 1 ; i--)
            update(1,n,1,temp[i].need,temp[i].id);
        for(int i = 1 ; i <= n ; i++)
            printf("%d%c",ans[i],i == n ? '\n' : ' ');
    }
}

int main(void)
{
    solve();
    return 0;
}
