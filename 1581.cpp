#include<bits/stdc++.h>
using namespace std;

typedef struct poi {
    string name;
    int vis;
    int sumtime;
    bool operator < (const poi &a) const {
        if(vis == a.vis) return sumtime < a.sumtime;
        return vis > a.vis;
    }
}poi;

int main(void)
{
    int t;
    std::ios::sync_with_stdio(false);
    while(cin>>t){
        vector<poi>p;
        while(t--){
            poi t;
            cin>>t.name;
            t.vis = 0;
            t.sumtime = 0;
            for(int i = 0 ; i < 4 ; i++){
                int a,b;
                cin>>a>>b;
                if(b != 0){
                    t.vis++;
                    t.sumtime += (b + (a-1) *20);
                }
            }
            p.push_back(t);
        }
        sort(p.begin(),p.end());
        cout<<p[0].name<<' '<<p[0].vis<<' '<<p[0].sumtime<<endl;
    }
    return 0;
}