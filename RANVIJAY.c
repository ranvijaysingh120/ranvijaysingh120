#include<stdio.h>

int main()
{
    int n,a=0;
    printf("Enter the number upto print the number:");
    scanf("%d",&n);
    
    do
    {
        printf("%d",a);
        printf("\n");
        a++;
    } while (a<n);
    return 0;
    
}