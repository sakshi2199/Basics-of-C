#include<stdio.h>
int main()
{
	int a[5], *p,i, sum=0;
	p=&a[0]; //referencing
	printf("Enter 5 values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",(p+i));
		sum = (sum + *(p+i));
	}
   printf("Sum = %d",sum);
	return 0;
}

