#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter number of rows");
	scanf("%d",&n);
	for(i=0; i<=n; i++)
	{
		for(j=n;i<j;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
