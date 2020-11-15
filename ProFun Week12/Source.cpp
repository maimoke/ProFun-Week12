#include<stdio.h>
#include<string.h>
int palindromecheck(char c1, char c2)
{
	if (c1 == c2)
		return 1;
	else return 0;
}
int main()
{
	char a[1000] = {'\0'};
	int length=0;
	bool ispalindrome = 1;
	scanf_s("%s", &a,1000);
	length = strlen(a);
	if (length % 2 == 0)
	{
		length=length / 2;
		for (int i = 0; i < length; i++)
		{
			if (palindromecheck(*(a + i), *(a + 2 * length - 1 - i))==0)
			{
				ispalindrome = 0;
			}
		}
	}
	else
	{
		length = (length - 1) / 2;
		for (int i = 0; i < length; i++)
		{
			if (palindromecheck(*(a + i), *(a + 2 * length - i))==0)
			{
				ispalindrome = 0;
			}

		}
	}
	if (ispalindrome == 0)
	{
		printf("Not Palindrome");
	}
	if (ispalindrome == 1)
	{
		printf("Palindrome");
	}




	return 0;
}