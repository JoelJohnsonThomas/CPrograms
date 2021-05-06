# include <stdio.h>
int main()
{
    int i,j,k;
    printf("Enter the Number:\n");
    scanf("%d",&i);
    printf("Enter another Number:\n");
    scanf("%d",&j);    
    k = i + j;
    printf("The Addition of %d and %d is %d\n",i,j,k);


    int x,y,z;
    printf("Enter the number :\n");
    scanf("%d",&x);
    printf("Enter the number :\n");
    scanf("%d",&y);
    z = x - y;
    printf("The Substraction of %d and %d is %d\n",x,y,z);

    int a,b,c;
    printf("Enter the number : \n");
    scanf("%d",&a);
    printf("Enter the number :\n");
    scanf("%d",&b);
    c = a * b;
    printf("The Multiplication of %d and %d is %d\n",a,b,c);

    int p,q,r;
    printf("Enter the number :\n");
    scanf("%d",&p);
    printf("Enter the number :\n");
    scanf("%d",&q);
    r = p / q;
    printf("The Division of %d and %d is %d\n",p,q,r);

    return 0;
}
