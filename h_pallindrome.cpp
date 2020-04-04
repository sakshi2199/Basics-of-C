#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("Enter a string\t");
    gets(s1);
    int t,i,l,j;
    strcpy(s2,s1);
    l=strlen(s1);
    for(i=l-1;i>=0;i--)
    {
    	s1[l-i-1]=s2[i];
        /*for(j=0;j<l;j++)
        {
            s1[j]=s2[i];
        }*/
		
    }
    s1[l]='\0';
    for(i=0;s1[i]!='\0';i++)
    {
    	printf("%c",s1[i]);
	}
	printf("\n");
	
	if(strcmp(s1,s2)==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
    

    
    
    
    return 0;
}

