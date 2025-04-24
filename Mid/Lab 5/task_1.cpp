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

        int x1, x2, y1, y2,m,x,y;
        x1=5;
        y1=5;
        x2=100;
        y2=500;


        float dx, dy, d, dr, dl;
        dx = (x2 - x1);
        dy = (y2 - y1);
        d  = (1/2*dx) - dy;
        dr = -dy;
        dl = (dx - dy);
        x=x1;
        y=y1;

        while(x<=x2){
            putpixel(x+(a/2),(b/2)-y,10);

            if(d>=0){
               x++;
               d=d+dr;
               }
            else{
                x++;
                y++;
                d=d+dl;
            }
        }


        // 2nd

        x1=5;
        y1=5;
        x2=500;
        y2=400;

        dx = (x2 - x1);
        dy = (y2 - y1);
        d  = (1/2*dx) - dy;
        dr = -dy;
        dl = (dx - dy);
        x=x1;
        y=y1;

        while(x<=x2){
            putpixel(x+(a/2),(b/2)-y,10);

            if(d>=0){
               x++;
               d=d+dr;
               }
            else{
                x++;
                y++;
                d=d+dl;
            }
        }





    getch();
    closegraph();
    return 0;
    }

