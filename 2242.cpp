#include<bits/stdc++.h>
using namespace std;

const double PI = 3.141592653589793;

typedef struct poi{
    double x,y;
}poi;

double get_lenth(poi a,poi b)
{
    return sqrt((a.x- b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

double get_p(double a,double b,double c){
    return (a+b+c)/2.0;
}

double get_area(double a,double b,double c,double p){
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

double get_d(double a,double b,double c)
{
    return (a*b*c)/(2.0*get_area(a,b,c,get_p(a,b,c)));
}

double get_ans(double a,double b,double c){
    return get_d(a,b,c)*PI;
}

int main(void)
{
    poi aa,bb,cc;
    while(cin>>aa.x>>aa.y>>bb.x>>bb.y>>cc.x>>cc.y){
        double a = get_lenth(aa,bb);
        double b = get_lenth(aa,cc);
        double c = get_lenth(bb,cc);
        cout<<fixed<<setprecision(2)<<get_ans(a,b,c)<<endl;
    }
    return 0;
}