#include <stdio.h>
int main()
{

    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        printf("%d",num);

        for(int j=1;j<=i-1;j++)
        {

            printf("%d",num-j);
        }
        printf("\n");
    }
    return 0;
}
