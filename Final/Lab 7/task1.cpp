#include<time.h>
#include<graphics.h>
#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#include<cmath>
#include<ctime>


    void Trigometric(int x, int y, int r, int h, int k){
        float theta = 0;
        while(theta<=45){
        x = r* cos(theta);
        y = r* sin(theta);
        putpixel(x+h, k-y, 12);
        putpixel(x+h, k+y, 12);
        putpixel(-x+h, k-y, 12);
        putpixel(-x+h, k+y, 12);
        putpixel(y+h,k-x,12);
        putpixel(y+h,k+x,12);
        putpixel(-y+h,k-x,12);
        putpixel(-y+h,k+x,12);
        theta+=0.01;
        }
    }
    void Bresenham(int r, int h, int k){
        int x = 0;
        int y = r;
        int p= 3-2*r;
        while(x<=y){
            putpixel(x+h,k-y,14);
            putpixel(x+h,k+y,14);
            putpixel(-x+h,k-y,14);
            putpixel(-x+h,k+y,14);
            putpixel(y+h,k-x,14);
            putpixel(y+h,k+x,14);
            putpixel(-y+h,k-x,14);
            putpixel(-y+h,k+x,14);

            if(p>=0){
                p=p+4*(x-y)+10;
                x++;
                y--;
            }
            else{
                p=p+4*x+6;
                x++;
            }

        }

    }
    void Midpoint(int r, int h, int k){
        int x = 0;
        int y = r;
        int p= 1-r;
        while(x<=y){
            putpixel(x+h,k-y,7);
            putpixel(x+h,k+y,7);
            putpixel(-x+h,k-y,7);
            putpixel(-x+h,k+y,7);
            putpixel(y+h,k-x,7);
            putpixel(y+h,k+x,7);
            putpixel(-y+h,k-x,7);
            putpixel(-y+h,k+x,7);

            if(p>=0){
                p=p+2*(x-y)+5;
                x++;
                y--;
            }
            else{
                p=p+2*x+3;
                x++;
            }

        }

    }



using namespace std;
    int main(){
        int gd = DETECT, gm;
        initgraph(&gd, &gm,"");
        int a = getmaxx();
        int b = getmaxy();
        setcolor(14);

        line(a/2,0,a/2,b);
        line(0,b/2,a,b/2);

        int op, red;

        while(1){


            cout<<"1.Trigometric."<<endl;
            cout<<"2.Bresenham."<<endl;
            cout<<"3.Midpoint."<<endl;
            cout<<"4.Exit.\n"<<endl;
            cout<<"Enter a Valid Option: ";

            cin>>op;
            if(op==1){
                cout<<"Enter Radius: ";
                cin>>red;
                Trigometric(1,2,red,a/2,b/2);
            }
            else if(op==2){
                cout<<"Enter Radius: ";
                cin>>red;
                Bresenham(red, a/2, b/2);
            }
            else if(op==3){
                cout<<"Enter Radius: ";
                cin>>red;
                Midpoint(red, a/2, b/2);
            }
            else if(op==4){
                return 0;
            }
            else{
                cout<<"\n\n\n\t\tInvalid Input!\t\t\n\n\n";
            }

        }




    getch();
    closegraph();
    return 0;
    }

