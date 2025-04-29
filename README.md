# 🔆 Random Circuit Art with Circles - Console Graphics Project

This is a simple but visually stunning **Computer Graphics project in C++**, using the `graphics.h` library to simulate a console-based random circuit-like pattern. Each "circuit" is generated using concentric circles at random positions and with random colors, creating a glowing, electric-art feel on the screen.

> 🌈 It's like a light show made with code — mesmerizing, beautiful, and a perfect intro project for those diving into computer graphics!

---

## ✨ Features

- 🎯 Randomly positioned **concentric circles**
- 🎨 Uses classic `graphics.h` (Turbo C++ style)
- 🌈 Dynamic **color-changing visuals**
- 🖥️ Console-based artistic output
- 🎲 A touch of randomness every time you run it

---

## 🎬 Preview / Inspiration

Inspired by the tutorial series by **Programming Hero**:

📺 [Computer Graphics Series (YouTube Playlist)](https://www.youtube.com/watch?v=TEMhWt9WwTA&list=PLAsPrIlN9FQdotpyRWoxo7dBUyurlBUH7)

---

## 🛠️ How to Run (CodeBlocks Setup Guide)

To run this project using **CodeBlocks** on **Windows**:

### ✅ Step 1: Install CodeBlocks with MinGW  
Download: [https://www.codeblocks.org/downloads/](https://www.codeblocks.org/downloads/)

---

### ✅ Step 2: Install WinBGIm Graphics Library  

- Download `graphics.h`, `winbgim.h`, and `libbgi.a` from:  
  🔗 [https://winbgim.codecutter.org/](https://winbgim.codecutter.org/)

- Copy files:
  - `graphics.h`, `winbgim.h` →  
    `C:\Program Files\CodeBlocks\MinGW\include`
  - `libbgi.a` →  
    `C:\Program Files\CodeBlocks\MinGW\lib`

---

### ✅ Step 3: Link Graphics Library in CodeBlocks

Go to:  
`Settings > Compiler > Linker Settings`  
And add the following to **"Other linker options"**:

-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

---

### ✅ Step 4: Run the Program

1. Create a new **C++ project**  
2. Paste the code (below)  
3. Build & Run 🎉

---

## 📁 Full Code

<details>
<summary>Click to view</summary>

```cpp
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
