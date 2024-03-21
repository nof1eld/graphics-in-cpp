#include <graphics.h>
#include <math.h>

void linewithangle (int x, int y, int length, int angle){
    float rad = angle * M_PI/180.0;
    line(x, y, x + (cos(rad)*length), y - (sin(rad)*length));
}
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    linewithangle(300, 300, 100, 60);
    

    getch();
    closegraph;
    return 0;
}