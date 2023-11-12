#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    int y;
    int z;

    printf("set the value of x : ");
    scanf("%d", &x);

    printf("set the value of y : ");
    scanf("%d", &y);

    z = pow(x, y);

    printf(" the result is : %d\n", z);
    return(0);
}
