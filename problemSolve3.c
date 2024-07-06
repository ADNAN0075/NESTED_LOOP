#include<stdio.h>
int main()
{
    int num;
    printf("Enter your integer number:");
    scanf("%d",&num);

    for(int r=1; r<=num; r++)
    {
        for(int c=0; c<=r-1; c++)
        {
            printf("%d",r+c);
        }
        printf("\n");
    }
    return 0;
}
