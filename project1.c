#include<stdio.h>
int main()
{
	float a,b;
	char c;
	printf("Enter a first number:");
	scanf("%f",&a);
	printf("Enter a char:");
	scanf("%s",&c);
	printf("Enter a second number:");
    scanf("%f",&b);
	
	switch(c)
	{
		case '+':
			{
			printf("%f number",a+b);
			break;	
			}
		case'-':
		{
			printf("%f nuber",a-b);
			break;
		}
		case'*':
		{
			printf("%f number",a*b);
			break;
		}	
		case'/':
		{
			printf("%f number",a/b);
		}
	}
	return 0;
}

