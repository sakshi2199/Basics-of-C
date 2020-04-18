#include<stdio.h>
#include<string.h>
int main()
{
	int a[4][4]={1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1},i,j,f1=0,f2=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(j>i)
			{
				if(a[i][j]!=0)
				{
					f1=1;
		
				}
			}
			if(i>j)
			{
				if(a[i][j]!=0)
				{
					f2=1;
					
				}
			}
		}
		if(f1==1 && f2==1)
		{
			break;
		}
	}
	
	if(f1==1 && f2==1)
	{
		printf("Neither Upper Triangular nor Lower Triangular");
	}
	else if(f1==0 && f2==1)
	{
		printf("Lower Triangular");
	}
	else if(f1==1 && f2==0)
	{
		printf("Upper Triangular");
	}
	return 0;
}
