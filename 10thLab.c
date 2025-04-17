#include <stdio.h>
#include <string.h>

int main()
{
    
    // * Q1.Count how many times a specific character repeats in a string

	char a[100],b[100];

	scanf("%[^\n]s",a);

	scanf(" %[^\n]s",b);

	int c = strlen(a);

	int count=0;

	for(int i=0;i<c;i++)
	{
		if(a[i]==b[0])
        {
            count++;
        }
	}

	printf("%d\n",count);

    // * Q2.Count no. of Uppercase and Lowercase characters in a string

    char a[100];

	scanf("%[^\n]s",a);
	
	int c = strlen(a);

	int countupper=0,countlower=0;

	for(int i=0;i<c;i++)
	{
		if('A'<=a[i] && a[i]<='Z')
        {
            countupper++;
        }

		else if('a'<=a[i] && a[i]<='z')
        {
            countlower++;
        }
	}

	printf("Upper:%d Lower:%d\n",countupper,countlower);

    // * Q3.Remove all non-alphabet characters from given string.
    
    char a[100],b[100];

	scanf("%[^\n]s",a);

	int c = strlen(a);

	int count=0;

	for(int i=0;i<c;i++)
	{
		if('A'<=a[i] && a[i]<='Z' | 'a'<=a[i] && a[i]<='z')
		{
			b[count]=a[i];
			count++;
		}
	}
	printf("%s\n",b);

    // * Q4.Check if a given substring repeats twice in the given string.

    char str[100], ss[50];

	printf("enter the string:");

	scanf("%[^\n]s",str);

	printf("enter the substring:");

	scanf(" %[^\n]s",ss);
	
	int count=0,flag=0;
	
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]==ss[0])
		{
			flag=1;
			for(int j=0;j<strlen(ss);j++)
			{
				if(str[i+j]!=ss[j])
				{
					flag=0;
					break;
				}
			}
		}
		if(flag==1) 
        {
            count++;
            flag=0;
        }
	}
	
	if(count>1)
	{
		printf("true, substring occurs %d times in string\n",count);
	}

	else
	{
		printf("False, less than 2 occuremces of substring in string (%d occurences)\n",count);
	}

}
