#include <graphics.h>
#include <math.h>

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

 
    line(300, 300, 300, 350);
    



    getch();
    closegraph;
    return 0;
}