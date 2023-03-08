#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter pattern number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-(i-1) && j<=n+(i-1))
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
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
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
    for(i=1;i<n;i++)
    {
        for(j=n-1;j>0;j--)
        {
        	
           if(j>=i)
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
    printf("\n\n");
    for(i=n;i>0;i--)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-(i-1) && j<=n+(i-1))
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
    printf("\n\n");
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
