#include<stdio.h>
int main()
{
	char ch [50];
	scanf("%[^\n]s",&ch);
	printf("THE GIVEN STRING IS %s",ch);
	return 0;
}