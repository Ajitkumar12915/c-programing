// Finding the area of circle when radius is given.r=10.
#include <stdio.h>
#include <conio.h>

int main()
{
    int r, area;
    printf("Enter the value of r=");
    scanf("%d", &r);
    area = 3.14 * r * r;
    printf("area of circle is:%d", area);
    return 0;
}