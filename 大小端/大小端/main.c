#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int test_sys(void)
{
	int a = 1;
	char* p = (char*)&a;  //a: 00000000 00000000 00000000 00000001
	return *p;  //����1��ΪС�ˣ�����0Ϊ���
}
int main()
{
	int ret = test_sys();
	if (ret)    //retΪ1��С�ˣ�������
		printf("С��\n");
	else printf("���\n");
	return 0;
}