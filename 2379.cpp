#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define maxn 10016
int prime[maxn],p;
bool is_prime[maxn];

void ai(void)
{
    memset(is_prime,1,sizeof is_prime);
    is_prime[0] = is_prime[1] = 0;
    for(int i = 2 ; i < maxn ; i ++)
    {
        if(is_prime[i])
        {
            prime[p++] = i;
            for(int j = i + i; j <= maxn ; j+= i)
                is_prime[j] = false;
        }
    } 
}  

int main(void)
{
    ai();
    int n;
    while(scanf("%d",&n),n)
    {
        int ans = 0;
        for(int i = 0 ; n >= prime[i] ; i++)
        {
            int sum = 0;
            for(int j = i ; j < p && sum < n; j++)
            {
                sum+=prime[j];
                if(sum == n)
                    ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}