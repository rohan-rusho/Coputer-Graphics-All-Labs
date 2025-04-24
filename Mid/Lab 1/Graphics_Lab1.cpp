#include<graphics.h>
#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>



using namespace std;
    int main(){
        int gd = DETECT, gm;
        initgraph(&gd, &gm,"");
        int a = getmaxx();
        int b = getmaxy();


        setcolor(14);
        //line(x,y,x2,y2);
        line(a/2,0,a/2,b); //l to r
        line(0,b/2,a,b/2); //up to down
        line(0,0,a,b); //cross
        //circle(h,k,r);
        circle(a/2,b/2,200);



        getch();
        closegraph();
        return 0;
    }
