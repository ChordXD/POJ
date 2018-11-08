#include<iostream>
#include<cstdio>
using namespace std;
int calc(int k,int b)
{
    int ans = 0;
    while(k > 0)
    {
        ans += (k%b);
        k/=b;
    }
    return ans;
}

int main(void)
{
    for(int i = 2992 ;i <= 9999 ; i++)
        if(calc(i,10) ==calc(i,12) && calc(i,12) == calc(i,16))
            cout<<i<<endl;
    return 0;
}