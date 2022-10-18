#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
    int gd=DETECT,Gm;
    initgraph(&gd,&gm,NULL);
    line(1,1,5,5);
    getch();
    closegraph();
    return 0;
}