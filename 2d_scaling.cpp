
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
    int gd=DETECT,gm;
    int x1,x2,y1,y2;
    int trans_factor1,trans_factor2;
    cout<<"enter the sacling factors  in X  and Y\n";
    cin>>trans_factor1>>trans_factor2;
 
    cout<<"Enter the corrdinates of line \n";
    cout<<"first end - coordinates \n";
    cin>>x1>>y1;
    cout<<"second end coordinates\n";
    cin>>x2>>y2;
  

   initgraph(&gd,&gm, NULL);
   line(x1,y1,x2,y2);
   
   x1=trans_factor1*x1;

   y1=trans_factor2*y1;
   x2=trans_factor1*x2;
   y2=trans_factor2*y2;

   cout<<"line after scaling \n";
   line(x1,y1,x2,y2);
getch();
closegraph();

return 0;

}


