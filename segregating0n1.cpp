#include<stdio.h>
int main()
{
	int s[10]={0,1,0,1,0,0,1,1,1,0}, i;
	int a=0, b=0;
	for(i=0;i<10;i++)
	{
		if(s[i]==0)
		{
			a++;
		}
		if(s[i]==0)
		{
			b++;
		}
	}
	for(i=0;i<a;i++)
	{
		s[i]=0;
	}
	return 0;
}
