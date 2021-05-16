#include<stdio.h>
int main()
{
    int n;
    float SI,p,r,q,CI,si,ci,po;
    //Simple Interest = PNR/100

    printf("Enter The Value Of Principal : \n");
    scanf("%f",&p);
    printf("Enter The Value Of Rate : \n");
    scanf("%f",&r);
    printf("Enter The Value Of Time In A Year : \n");
    scanf("%d",&n);
     SI = (p * n * r)/100;
    printf("Simple Interest,SI : %f \n",SI);
    //si = p * n * r ;
   
 
   
    
    return 0;
}
