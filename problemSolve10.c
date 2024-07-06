 #include <stdio.h>
    int main()
    {
        int n;
        scanf("%d",&n);
        for(int row=1;row<=n;row++)
        {

            for(int col=row;col<=n-1;col++)
            {
                printf("_");
            }
            for(int col=1;col<=row+1;col++)
            {
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
