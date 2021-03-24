#include <stdio.h>

int main()
{
	int i, sum=0;
	for(i=1;i<=100;i++)
	{
		printf("%d", i);
		sum=sum+i;
	}
        printf("\n1~100까지의 합은 %d입니다.", sum);
        return 0;
}
