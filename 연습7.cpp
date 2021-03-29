#include <stdio.h>

int main()
{
    char name[20];
    char code;
    int age;
    double secure;
    printf("이름 : ");
    scanf("%s", &name);
	printf("나이 :");
	scanf("%d", &age);
	fflush(stdin);
	printf("부서코드 :");
	scanf("%c", &code);
	printf("보안키 ");
	scanf("%lf", &secure);
	printf("******************************\n");
	printf("이름 :%s\n", name);
	printf("나이 :%d\n", age);
	printf("부서코드 :%c\n", code);
	printf("보안키 :%lf\n", secure);
    printf("******************************");
    return 0;
}
