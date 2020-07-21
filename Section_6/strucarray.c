#include <stdio.h>

struct point
{
    int x, y, z
};
int main()
{
    /* 
    struct point p1 = {.y = 2, .x = 3, .z = 6};
    struct point p2 = {x : 23};

    printf("x = %d, y = %d, z = %d \n", p1.x, p1.y, p1.z);
    printf("x = %d", p2.x); */

    struct point pts[5] =
        {
            [2].y = 5,
            [2].x = 6,
            [0].z = 2};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d %d %d\n", pts[i].x, pts[i].y, pts[i].z);
    }

    return 0;
}
