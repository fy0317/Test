#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int test_sys(void)
{
	int a = 1;
	char* p = (char*)&a;  //a: 00000000 00000000 00000000 00000001
	return *p;  //返回1则为小端，返回0为大端
}
int main()
{
	int ret = test_sys();
	if (ret)    //ret为1是小端，否则大端
		printf("小端\n");
	else printf("大端\n");
	return 0;
}