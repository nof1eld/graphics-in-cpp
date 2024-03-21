#include <graphics.h>
#include <math.h>

void square(int x, int y, int a){
    rectangle(x, y, x+a, y+a);
}

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    square(200, 200, 100);

    getch();
    closegraph;
    return 0;
}