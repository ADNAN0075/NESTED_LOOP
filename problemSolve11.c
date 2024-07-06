#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int row=1; row<=num; row++)
    {
        for(int col=1; col<=num-row; col++)
        {
            printf("_");
        }
        for(int j=1; j<2*row; j++)
        {
            printf("*");

        }

        printf("\n");
    }
    return 0;
}
