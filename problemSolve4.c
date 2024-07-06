 #include <stdio.h>
 int main()
 {
    int num;
    scanf("%d",&num);
    for(int r=1;r<=num;r++)
    {
        for(int c=r;c<=num-1;c++)  //col<n can be also written
        {
            printf("_");//print (_)
        }
        for(int i=1;i<=r;i++)
        {
            printf("%d",r);//printing numbers.
            /*short tricks to print same number print row and if print n+1 number format then print col  */
        }
        printf("\n");
    }
    return 0;
 }
