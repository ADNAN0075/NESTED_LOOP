#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number :");
    scanf("%d",&num);
    for(int r=0; r<=num; r++)
    {
        for(int c=1; c<=num; c++)
        {
            printf("%d",r+c);
        }
        printf("\n");
    }
    return 0;
}
