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
        x1=5;
        x2=500;
        y1=6;
        y2=400;

        m = (y2-y1)/(x2-x1);
        x=x1;
        y=y1;


        if(abs(m)<= 1){
            while(x<=x2){
                    cout<<"X= "<<floor(x+0.5)<<"    Y= "<<floor(y+0.5)<<"   (X,Y)= "<<floor(x+0.5)<<","<<floor(y+0.5)<<endl;
                putpixel(x+(a/2),(b/2)-y,14);
                x++;
                y=y+m;
            }
        }else if(abs(m)> 1){
            while(y<=y2){
                putpixel(x+(a/2),(b/2)-y,14);
                y++;
                x=x+(1/m);
            }
        }
    getch();
    closegraph();
    return 0;
    }
