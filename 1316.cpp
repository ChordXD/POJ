#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6;
unsigned int ans[maxn];
bool is_right[maxn];
int p;
unsigned get_sum(unsigned int n){
    if(n < 10) return n;
    else return (n%10) + get_sum(n/10);
}

void check(void)
{
    memset(is_right,1,sizeof is_right);
    is_right[0] = false;
    for(unsigned int i = 1 ; i <= maxn ; i++){
        if(is_right[i]){
            ans[p++] = i;
            unsigned int j = i;
            while(j <= maxn){
                unsigned int next = j + get_sum(j);
                if(next > maxn || is_right[next] == false) break;
                j = next;
                is_right[j] = false; 
            }
        }
    }
}

int main(void)
{
    check();
   // printf("%d\n",p);
    for(int i = 0 ; i < p ; i++){
        printf("%u\n",ans[i]);
    }
    return 0;
}