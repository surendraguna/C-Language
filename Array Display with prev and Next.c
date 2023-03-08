#include<stdio.h>
int n,c,i=-1,c2,a[100];
void insert();
void display();
int main()
{
	int c;
	printf("1.insert\n2.Display\n3.Exit\n");
	while(c!=3)
	{
		printf("Enter Choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				printf("Exit from the program");
		}
	}
}
void insert()
{
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter Elements:\n");
	for(i=1;i<=n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	i=0;
}
void display()
{
	if(i==-1)
	{
		printf("Empty Array\n");
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			printf("a[%d]:%d\n",i,a[i]);
		}
		printf("1.prev\n2,next\n");
		printf("intial:%d\n",a[1]);
		int i=1;
		while(c2!=3)
		{	
			printf("Enter Choice in display:");
			scanf("%d",&c2);
			switch(c2)
			{
				case 1:
					if(i!=1)
					{		
						i--;
						printf("prev:%d\n",a[i]);
					}
					else
					{
						printf("It is Head\n");
					}
					break;
				case 2:
					if(i!=n)
					{
						i++;
						printf("next:%d\n",a[i]);
					}
					else
					{
						printf("It is Tail\n");
					}
					break;
				case 3:
					printf("Exit from display\n");
			}		
		}
	}
}
