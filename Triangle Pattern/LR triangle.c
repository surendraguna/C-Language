#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=2*n-1;i>0;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(i>=n-(j-1) && i<= n+(j-1))
            {
            	printf("* ");
			}
            else
            {
            	printf("  ");
			}                
        }
        printf("\n");
    }
}
