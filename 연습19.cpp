#include <stdio.h>
#include <string.h>

int main()
{
	char a[101];
	int i;
	gets(a);
	for(i=strlen(a)-1; i>=0; i--)
		printf("%c", a[i]);
}
