#include <stdio.h>
#include <math.h>
int main()
{
    double x,y;
    scanf("%lf",&x);
    if(x>6)
    {
        y=5/27*(x*x+4*x-6);
    }
    else if(0<x&&x<=6)
    {
        y=log3(16)+x;
    }
    else
    {
        y=23/7*abs(x*x*x+4);
    }
    printf("%.3lf",y);
    return 0;
}