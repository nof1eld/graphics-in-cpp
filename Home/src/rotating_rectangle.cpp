#include <graphics.h>
#include <math.h>

void rectangle_w_angle(int cx, int cy, int w, int h, int angle){
    float rad = angle * M_PI/180.0;
    int dx = w/2;
    int dy = h/2;
    float new_coordinates[8] = {
        //(X1,Y1):
        (-dx * cos(rad) +dy * sin(rad) +cx),
        (-dx * sin(rad) -dy * cos(rad) +cy),
        //(X2,Y2):
        (dx * cos(rad) +dy * sin(rad) +cx),
        (dx * sin(rad) -dy * cos(rad) +cy),
        //(X3,Y3):
        (dx * cos(rad) -dy * sin(rad) +cx),
        (dx * sin(rad) +dy * cos(rad) +cy), 
        //(X4,Y4):
        (-dx * cos(rad) -dy * sin(rad) +cx),
        (-dx * sin(rad) +dy * cos(rad) +cy)
    };
    for (int i = 0; i < 8; i+=2)
    {
        if(i<6){
            line(new_coordinates[i], new_coordinates[i+1],
            new_coordinates[i+2], new_coordinates[i+3]);
        }else {
            line(new_coordinates[i], new_coordinates[i+1],
            new_coordinates[0], new_coordinates[1]);
        }
        
    }
    
}

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    int angle = 0;
    while (1)
    {
        cleardevice();
        rectangle_w_angle(325, 250, 200, 100, angle);
        swapbuffers();
        delay(30);
        angle++;
    }
    
    getch();
    closegraph;
    return 0;
}