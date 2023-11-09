#include <stdio.h>

void drawRectangle();
void drawParallel();
void drawBase();

void main() {
    drawRectangle();
    return;
}

void drawRectangle()
{
    drawBase();
    drawParallel();
    drawBase();
    return;
}

void drawParallel()
{
    printf("|               |\n");
    printf("|               |\n");
    printf("|               |\n");

    return;
}

void drawBase()
{
    printf(" - - - - - - - -\n");
    return;
}
