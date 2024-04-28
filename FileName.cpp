#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//KiKi想知道1~2019中有多少个包含数字9的数。包含数字的数是指有某一位是“9”的数，例如“2019”、“199”等。
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