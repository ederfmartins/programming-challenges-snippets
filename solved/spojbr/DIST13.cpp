#include <stdio.h>

#define abs(x) ((x) > 0 ? (x) : -(x))

int main()
{
    int x1, x2, y1, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    printf("%d\n", abs(x1-x2) + abs(y1-y2));
    return 0;
}