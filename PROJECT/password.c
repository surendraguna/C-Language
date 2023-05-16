#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool verify(char *p)
{
	bool f = false;
	if(strlen(p) > 6 && strlen(p) < 10)
		f = true;
	int i;
	bool a = false, b = false, e = false, d = false;
	for(i=0; i<strlen(p); i++)
	{
		char c = p[i];
		if(c >= '0' && c <= '9')
			a = true;
		else if(c >= 'a' && c <= 'z')
			b = true;
		else if(c >= 'A' && c <= 'Z')
			d = true;	
		else
			e = true;
	}
	return (f && a && b && d && e); 
}
void main()
{
	char *p;
	gets(p);
	if(verify(p))
		printf("Valid Password");
	else
		printf("Invalid Password");
}
