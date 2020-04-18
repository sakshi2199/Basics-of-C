#include<stdio.h>
#include<stdlib.h>
typedef struct employee
{
	int eid;
	char name[30];
}emp;
int main()
{
	emp e, *p;
	p = &e;
	printf("Enter Employee ID and Name\n");
	scanf("%d",&p->eid);
	fflush(stdin);
	gets(p->name);
	printf("\nDetails\n");
	printf("Employee ID = %d\n",p->eid);
	printf("Name = %s",p->name);
	return 0;
}
