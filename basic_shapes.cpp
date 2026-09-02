#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    // Initialize graphics
    initgraph(&gd, &gm, "");

    // 1. Draw a straight line
    line(100, 100, 300, 100);

    // 2. Draw a circle
    circle(200, 250, 70);

    // 3. Draw a rectangle
    rectangle(400, 100, 600, 220);

    // 4. Draw a triangle
    line(450, 300, 350, 450);
    line(350, 450, 550, 450);
    line(550, 450, 450, 300);

    // Wait for a key press
    getch();

    // Close graphics window
    closegraph();

    return 0;
}