#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{  int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);
  int max=getmaxx();
  for(int i=0;i<max;i++)
  { setcolor(DARKGRAY);
    //road
    bar(0,370,max,390);
    setcolor(YELLOW);
    //ballon
    circle(80+i,80,50);
    setcolor(BLUE);
    //river
    bar(0,230,max,340);
    setcolor(BROWN);
    // wooden pole
    bar(50,250,60,350);
    setcolor(DARKGRAY);
    //noitce board
    bar(525,250,535,350);
    bar(480,200,580,250);
    setcolor(WHITE);
    outtextxy(490,220,"my game");
    setcolor(RED);
    //bus
    bar(100+i,300,200+i,350);
    line(80+i,130,120+i,300);
    setcolor(GREEN);
    bar(-100+i*5,30,-50+i*5,50);
    //tyres
    circle(120+i,360,10);
    circle(180+i,360,10);
    if(i==0)
    {setcolor(WHITE);
      outtextxy(100,400,"press any key to start");
      getch();

    }
    delay(20);
    if(i<max)
    cleardevice();
  }
  delay(100000);
return 0;
}
