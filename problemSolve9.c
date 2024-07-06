#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int row=1;row<=num;row++)
    {
        for(int col=1; col<=num; col++)
        {
            if((row%2==0 && col%2==0) || (row%2==1 && col%2==1))
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}

