// finding the area and perimeter of rectangle when sides are give.
#include <stdio.h>
#include <conio.h>

int main()
{
    int l, b, area, perimeter;
    printf("Enter the l=");
    scanf("%d", &l);
    printf("Enter the b=");
    scanf("%d", &b);
    area = l * b;
    printf("area of rectangle is:%d\n", area);
    perimeter = 2 * (l + b);
    printf("perimeter is %d", perimeter);
    return 0;
}