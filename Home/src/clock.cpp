#include <graphics.h>
#include <math.h>

void linewithangle(int x, int y, int length, int angle)
{
    float rad = angle * M_PI / 180.0;
    line(x, y, x + (cos(rad) * length), y - (sin(rad) * length));
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    for (int h = 135; h < 415; h += 30)
    {
        for (int m = -90; m < 270; m += 6)
        {
            for (int s = -90; s < 270; s += 6)
            {
                cleardevice();
                setlinestyle(0, 2, 3);
                circle(325, 250, 100);
                linewithangle(325, 250, 67, -h);
                linewithangle(325, 250, 77, -m);
                setcolor(RED);
                linewithangle(325, 250, 87, -s);
                setcolor(WHITE);
                swapbuffers();
                delay(1000);
            }
        }
    }

    getch();
    closegraph;
    return 0;
}