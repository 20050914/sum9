#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//KiKi��֪��1~2019���ж��ٸ���������9�������������ֵ�����ָ��ĳһλ�ǡ�9�����������硰2019������199���ȡ�
int main()
{
	int i, j = 0;
	for (i = 1; i <= 2019; i++)
	{
		int a = i;
		while (a > 0)
		{
			if (a % 10 == 9)//            129
			{
				j++; break;

			}
			else
			{
				a = a / 10;
			}
		}
	}
	printf("%d", j);
}