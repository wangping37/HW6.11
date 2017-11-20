#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
	int	a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	int pass;
	size_t	i;
	int hold;
	int judge = 0;//耞い戈琌Τユ传Τユ传跑1⊿ユ传玂0
	puts("Data items in original order");
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);//ゼ逼
	}
	/////////////////////////////
	for (pass = 1; pass < SIZE ; ++pass)//獁逼
	{
		for (i = 0; i < SIZE - pass; ++i)//计程穐簿Ω计
		{
			if (a[i] > a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
				judge = 1;
			}
		}
		if (judge == 1)//1ボΤユ传癘眔reset耞跑计獽ㄏノ
		{
			judge = 0;
		}
		else if (judge == 0)//玂0杠竒戈⊿Τユ传
		{
			break;
		}
	}
	////////////////////////////
	puts("\nData items in ascending order");//琌逼计
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}
	puts(" ");
	system("pause");
	return	0;
}