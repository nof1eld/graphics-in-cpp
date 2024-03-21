#include <graphics.h>
#include <math.h>

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    moveto(200, 200);
    lineto(300, 300);
    lineto(400, 200);
    lineto(200, 200);
    



    getch();
    closegraph;
    return 0;
}