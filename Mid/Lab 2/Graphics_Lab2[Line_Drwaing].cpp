#include   <bits/stdc++.h>
#include   <ext/pb_ds/assoc_container.hpp>
#include   <stdio.h>
#include   <string.h>
#include   <stdlib.h>
#include   <iomanip>
#define    FAST       ios::sync_with_stdio(0);cin.tie(0);
#define    pb         push_back
#define    mp         make_pair
#define    ff         first
#define    ss         second
#define    el         "\n"
#define    ii        int
#define    ll         long long
#define    ld         long double
#define    pii        pair<ii,ii>
#define    pll        pair<ll,ll>
#define    vcii       vector<ii>
#define    vcll       vector<ll>
#define    vcd        vector<double>
#define    vcs        vector<string>
#define    vpii       vector<pii>
#define    vpll       vector<pll>
#define    stl_sort(v)   sort(v.begin(),v.end())
#define    stl_rev(v)    reverse(v.begin(),v.end())
#define    rep(i,x,y) for(ll i=x;i<y;i++)
#define    scll(x)    scanf("%lld",&x)
#define    pfll(x)    printf("%lld",x)
#define    scd(x)     scanf("%llf",&x)
#define    pfd(x)     prinf("%0.5llf\n",x)
#define    mask_on_count(x)  __builtin_popcount(x)
#define    MOD        (ll)(1e9+7)
#define    MAX        (ll)1e18
#define    MIN        (ll)(-1e18)
#define    yes        cout<<"YES\n";
#define    no         cout<<"NO\n";
#define    ull        unsigned long long

// For Graphics
#include <graphics.h>
#include <conio.h>

using namespace std;


int main()
{
    /* freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); */

    //FAST

    ll a,d,c,e,f,g,h,i,j,k,l,n,o,p,q,r,s,t,u,v,w,z,sum,sum1,sum2,tc;
    ld A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,SUM,SUM1,SUM2;

    // graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int x_max=getmaxx(), y_max=getmaxy();

    setcolor(WHITE);
    line(0,y_max/2, x_max, y_max/2);
    setcolor(WHITE);
    line(x_max/2,0,x_max/2, y_max);

    int x,y,x1,x2,y1,y2;
    float m,b;
    cout<<"Enter x1 y1 x2 y2 : \n";
    cin>>x1>>y1>>x2>>y2;

    if(x2!=x1)
    {
        m=(float)(y2-y1)/(float)(x2-x1);
        b=y1-m*x1;
    }

    cout<<"m b "<<m<<" "<<b<<"\n";

    if(y1==y2)
    {
        if(x1<x2)
        {
            x=x1;
            y=y1;
        }
        else
        {
            x=x2;
            y=y2;
            swap(x1,x2);
            swap(y1,y2);
        }
        cout<<"x parallel line\n";
        while(x<=x2)
        {
            putpixel(x+x_max/2, y_max/2-y,10);
            x++;
        }
    }
    else if(x1==x2)
    {
        if(y1<y2)
        {
            x=x1;
            y=y1;
        }
        else
        {
            x=x2;
            y=y2;
            swap(x1,x2);
            swap(y1,y2);
        }
        cout<<"y parallel line\n";
        while(y<=y2)
        {
            putpixel(x+x_max/2, y_max/2-y,10);
            y++;
        }
    }
    else if(abs(m)<=1)
    {
        if(x1<x2)
        {
            x=x1;
            y=y1;
        }
        else
        {
            x=x2;
            y=y2;
            swap(x1,x2);
            swap(y1,y2);
        }
        cout<<" (0 degree)<= theta <=(45 degree) line\n";
        while(x<=x2)
        {
            putpixel(x+x_max/2, y_max/2-y,10);
            x++;
            y=m*x+b;

        }
    }
    else if(abs(m)>1)
    {
        if(y1<y2)
        {
            x=x1;
            y=y1;
        }
        else
        {
            x=x2;
            y=y2;
            swap(x1,x2);
            swap(y1,y2);
        }
        cout<<" (0 degree)> theta or theta > (45 degree) line\n";
        while(y<=y2)
        {
            putpixel(x+x_max/2, y_max/2-y,10);
            y++;
            x=(y-b)/m;
        }
    }


    getch();
    closegraph();

    return 0;
}
