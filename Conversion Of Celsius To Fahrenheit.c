# include <stdio.h>
int main()
{
    float c,f;
    printf("Enter The Temperature In Celsius:\n");
    scanf("%f",&c);
    f = (1.8 * c)+ 32;
    printf("Temperature In Fahrenheit: %f F\n",f);
    
}
