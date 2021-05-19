#include<stdio.h>
int main()
{
    float rad;
    float Ar;
    float Circ;
    printf("Enter The Radius Of The Circle:\n");
    scanf("%f",&rad);
    Ar = 3.14 * rad * rad;
    printf("The Area Of The Circle is %f sq.units\n",Ar);
    Circ = 2 * 3.14 * rad;
    printf("The Circumference Of The Circle is %f\n",Circ);
    return 0;
} 
