# include <stdio.h>
int main(){
    int i = 0;
    int j = 1;
    int n;
    printf("Enter The Upper Limit:\n");
    scanf("%d",&n);
    printf(i);
    printf(j);
    for(int k =0;k<=n;k++)
    {
        k = i + j;
        printf("%d",k);
        i = j;
        j = k;
    }
}
