#include<stdio.h>
#include<math.h>
void add();
void sub();
void mul();
void div();
void per();
void fact();
void logg();
void power();
void squre();
void cube();
void mixed();
void expo();
void ln();
void inverse();
void sqroot();
void cuberoot();
void root();
void sn();
void cs();
void tn();
double a,b;
int main()
{
	printf("\t\t\t\t\tCALCULATOR\n");
	printf("CHOICE OPTIONS FROM LIST:\n");
	printf("1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.PERCENTAGE\n6.FACTORIAL\n7.LOG(VALUE,BASE)\n8.POWER(BASE,POWER)\n9.SQURE(n)\n10.CUBE(n)\n11.MIXED FRACTION\n12.EXPONENT(n)\n13.LN(VALUE,e)\n14.INVERSE(n)\n15.SQURE ROOT\n16.CUBE ROOT\n17.ROOT\n18.SIN\n19.COS\n20.TAN\n21.EXIT FROM YHE PROGRAM\n\n");
	int c=0;
	while(c!=21)
	{
		printf("Enter Choice: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				add();
				break;
			case 2:
				sub();
				break;
			case 3:
				mul();
				break;
			case 4:
				div();
				break;
			case 5:
				per();
				break;
			case 6:
				fact();
				break;
			case 7:
				logg();
				break;
			case 8:
				power();
				break;
			case 9:
				squre();
				break;
			case 10:
				cube();
				break;
			case 11:
				mixed();
				break;
			case 12:
				expo();
				break;
			case 13:
				ln();
				break;
			case 14:
				inverse();
				break;
			case 15:
				sqroot();
				break;
			case 16:
				cuberoot();
				break;
			case 17:
				root();
				break;
			case 18:
				sn();
				break;
			case 19:
				cs();
				break;
			case 20:
				tn();
				break;
			case 21:
				printf("POWER OFF");
				break;
			default :
				printf("Enter Valid choice\n");
		}
	}
}
void add()
{
	printf("Enter a b: ");
	scanf("%lf %lf",&a,&b);
	printf("%lf+%lf = %lf\n",a,b,a+b);
}
void sub()
{
	printf("Enter a b: ");	
	scanf("%lf %lf",&a,&b);
	printf("%lf-%lf = %lf\n",a,b,a-b);
}
void mul()
{
	printf("Enter a b: ");
	scanf("%lf %lf",&a,&b);
	printf("%lf*%lf = %lf\n",a,b,a*b);
}
void div()
{
	printf("Enter a b: ");
	scanf("%lf %lf",&a,&b);
	printf("%lf div of %lf = %lf\n",a,b,a/b);
}
void per()
{
	printf("Enter percentage: ");
	scanf("%lf",&a);
	printf("value of %d = %f\n",a,a/100);
}
void fact()
{
	printf("Enter a!: ");
	int i,r=1,a;
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		r+=r*i;
	}
	printf("%d! = %d\n",a,r);
}
void logg()
{
	int a,b;
	printf("Enter log a base b:");
	scanf("%d %d",&a,&b);
	double c=log(a)/log(b);
	printf("log %d base %d = %lf\n",a,b,c);
}
void power()
{
	printf("Enter base and power: ");
	scanf("%lf %lf",&a,&b);
	printf("%lf^%lf = %lf\n",a,b,pow(a,b));	
}
void squre()
{
	printf("Enter base of power(2): ");
	scanf("%lf",&a);
	printf("%lf^2 = %lf\n",a,pow(a,2));
}
void cube()
{
	printf("Enter base of power(3): ");
	scanf("%lf",&a);
	printf("%lf^3 = %lf\n",a,pow(a,3));
}
void mixed()
{
	printf("Enter a b c: ");
	double c;
	scanf("%lf %lf %lf",&a,&b,&c);
	double d=(c*b+a)/c;
	printf("mixed of %lf %lf %lf = %lf \n",a,b,c,d);
}
void expo()
{
	printf("Enter base(e) power(x): ");
	scanf("%lf",&a);
	printf("e^%lf = %lf\n",a,exp(a));
}
void ln()
{
	printf("Enter log(x) base(e): ");
	double e=M_E;
	scanf("%lf",&a);
	double c=log(a)/log(e);
	printf("log(%lf) base(e) = %lf\n",a,c);
}
void inverse()
{
	printf("Enter base(x) power(-1): ");
	scanf("%lf",&a);
	printf("base(%lf) power(-1) = %lf\n",a,pow(a,-1));
}
void sqroot()
{
	printf("Enter x (power of 1/2): ");
	scanf("%lf",&a);
	printf("%lf^(1/2) = %lf\n",a,sqrt(a));
}
void cuberoot()
{
	printf("Enter x (power of 1/3): ");
	scanf("%lf",&a);
	printf("%lf^(1/3) = %lf\n",a,pow(a,1.0/3.0));
}
void root()
{
	printf("Enter x and n where n used as power(1/n) : ");
	scanf("%lf %lf",&a,&b);
	double x = 1/b;
	printf("%lf^(1/%lf) = %lf\n",a,b,pow(a,x));
}
void sn()
{
	printf("Enter sin(x): ");
	double pi=M_PI;
	scanf("%lf",&a);
	a=(a*pi)/180;
	printf("sin(%lf) = %lf\n",a,sin(a));
}
void cs()
{
	printf("Enter cos(x): ");
	double pi=M_PI;
	scanf("%lf",&a);
	a=(a*pi)/180;
	printf("cos(%lf) = %lf\n",a,cos(a));
}
void tn()
{
	printf("Enter tan(x): ");
	double pi=M_PI;
	scanf("%lf",&a);
	a=(a*pi)/180;
	printf("tan(%lf) = %lf\n",a,tan(a));
}
