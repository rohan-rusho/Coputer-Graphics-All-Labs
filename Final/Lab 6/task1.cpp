#include<time.h>
#include<graphics.h>
#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#include<cmath>
#include<ctime>



  void cir(int r,int a, int b){


        int x,y;
        x=0;
        y=r;
        int aa=a/2;
        int bb=b/2;
        while(x<=y){
            putpixel(x+a,y+b,5);
            putpixel(x+a,-y+b,11);
            putpixel(-x+a,y+b,3);
            putpixel(-x+a,-y+b,12);
            putpixel(y+a,x+b,8);
            putpixel(y+a,-x+b,23);
            putpixel(-y+a,x+b,2);
            putpixel(-y+a,-x+b,7);
            y=sqrt(pow(r,2)-pow(x,2));
            x++;

        }
}

using namespace std;
    int main(){
        int gd = DETECT, gm;
        initgraph(&gd, &gm,"");
        int a = getmaxx();
        int b = getmaxy();
        setcolor(14);





    for (int i= 100; i< 100000; i++){
        cir(rand()%i,rand()%a,rand()%b);
        Sleep(1);
    }



    getch();
    closegraph();
    return 0;
    }

