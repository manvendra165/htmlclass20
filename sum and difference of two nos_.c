#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a=10,b=4;
    float c=4.0,d=2.0;
    scanf("%d %d %f %f", &a, &b, &c, &d);
    printf("%d %d\n%.1f %.1f",a+b,a-b,c+d,c-d);

    
    return 0;
}
