#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
	int	a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	int pass;
	size_t	i;
	int hold;
	int judge = 0;//�P�_�^�X����ƬO�_���洫�A���洫�ܬ�1�A�S�洫�O��0
	puts("Data items in original order");
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);//���ƦC
	}
	/////////////////////////////
	for (pass = 1; pass < SIZE ; ++pass)//�H�U����w�ƦC�A���^�X
	{
		for (i = 0; i < SIZE - pass; ++i)//�@�^�X�Ʀr�̦h�h������
		{
			if (a[i] > a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
				judge = 1;
			}
		}
		if (judge == 1)//1��ܦ��洫�A�O�oreset�P�_���ܼơA�H�K�U�@�^�X�ϥ�
		{
			judge = 0;
		}
		else if (judge == 0)//�O��0���ܥN��w�g��ƨS���洫
		{
			break;
		}
	}
	////////////////////////////
	puts("\nData items in ascending order");//�H�U�O�L�X�ƦC�n���Ʀr
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}
	puts(" ");
	system("pause");
	return	0;
}