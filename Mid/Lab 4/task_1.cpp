#include<graphics.h>
#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#include<cmath>


using namespace std;
    int main(){
        int gd = DETECT, gm;
        initgraph(&gd, &gm,"");
        int a = getmaxx();
        int b = getmaxy();
        setcolor(14);


        line(a/2,0,a/2,b); //X
        line(0,b/2,a,b/2);  //Y

        float x1, x2, y1, y2,m,x,y;
        x1=10;
        y1=0;
        x2=500;
        y2=400;


        float dx, dy, d, ds, dt;
        dx = abs(x2 - x1);
        dy = abs(y2 - y1);
        d  = (2*dy)-dx;
        ds = 2*dy;
        dt = 2*(dy-dx);
        x=x1;
        y=y1;

        while(x<=x2){
            putpixel(x+(a/2),(b/2)-y,10);

            if(d<0){
               x++;
               d=d+ds;
               }
            else{
                x++;
                y++;
                d=d+dt;
            }
        }


        // 2nd

        x1=20;
        y1=0;
        x2=400;
        y2=-300;


        dx = abs(x2 - x1);
        dy = abs(y2 - y1);
        d  = (2*dy)-dx;
        ds = 2*dy;
        dt = 2*(dy-dx);
        x=x1;
        y=y1;

        while(x<=x2){
            putpixel(x+(a/2),(b/2)+y,10);

            if(d<0){
               x++;
               d=d+ds;
               }
            else{
                x++;
                y++;
                d=d+dt;
            }
        }





    getch();
    closegraph();
    return 0;
    }

