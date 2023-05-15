#include<graphics.h>
#include<iostream>
#include<Windows.h>

void baothu() 
{ 
 setbkcolor(1); 
 setcolor(RED); 
 moveto(20, 40); 
 linerel(400,0);
 linerel(0,200);
 linerel(-400,0);
 linerel(0,-200);
}
using namespace std;
main()
{
    int mh=0,mode=0;
    initgraph(&mh,&mode,(char*)"");
    //for(int i=1;i<=255;i++){
    //    setcolor(i);
        //cout<<i<<endl;

    //}
   // CONSOLE_FULLSCREEN;
    baothu();
    getch();
    closegraph();
}