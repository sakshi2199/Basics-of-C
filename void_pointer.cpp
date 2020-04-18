#include<stdio.h>
int main()
{
	int a=10;
	float b=3.33;
	char c='a';
	void *p;
	p =&a;
	printf("%d\t",*((int*)p));
	p=&b;
	printf("%f\t",*((float*)p));
	p=&c;
	printf("%c\t",*((char*)p));
	return 0;
}
