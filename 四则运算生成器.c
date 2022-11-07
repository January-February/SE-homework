#define _CRT_SECURE_NO_WARNINGS 1
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void primary_school_taxt(int grade, int count);

int main()
{
	system("color f0");
	printf("这是小学四则运算自动生成程序\n");
	printf("输入1进入自动生成程序，输入0退出程序\n");
	printf("------------------------------------\n");
	int begin_no = 0;
	scanf("%d", &begin_no);
	if (begin_no == 1)
	{
		int grade = 0;
		int count = 0;
		printf("请输入年级\n");
		scanf("%d", &grade);
		printf("请输入所需题目数量\n");
		scanf("%d", &count);
		primary_school_taxt(grade, count);
	}
	else if (begin_no == 0)
	{
		printf("欢迎再次使用!");
	}
	return 0;
}

void primary_school_taxt(int grade, int count)
{
	srand((unsigned int)time(NULL));
	if (grade == 1)
	{
		int sum = 0;
		for (int i = 0; sum != count; i++)
		{
			int Dm = rand() % 2 + 1;
			int a = rand() % 20 + 1;
			int a2 = rand() % 20 + 1;
			int a3 = rand() % 20 + 1;
			if (a - a2 - a3 >= 0 && a + a2 + a3 < 20)
			{
				if (Dm == 1)
				{
					printf("%d + %d +%d= \n", a, a2, a3);
				}
				else if (Dm == 2)
				{
					printf("%d - %d -%d= \n", a, a2, a3);
				}
				sum++;
			}
		}
	}
	else if (grade == 2)
	{
		int sum = 0;
		for (int i = 0; sum != count; i++)
		{
			int Dm2 = rand() % 4 + 1;
			int b = rand() % 50 + 1;
			int b2 = rand() % 50 + 1;
			int b3 = rand() % 50 + 1;
			if (b - b2 - b3 >= 0 && b + b2 + b3 < 50 && b + b2 - b3 >= 0 && b - b2 + b3 >= 0)
			{
				if (Dm2 == 1)
				{
					printf("%d + %d +%d= \n", b, b2, b3);
				}
				else if (Dm2 == 2)
				{
					printf("%d - %d -%d= \n", b, b2, b3);
				}
				else if (Dm2 == 3)
				{
					printf("%d + %d -%d= \n", b, b2, b3);
				}
				else if (Dm2 == 4)
				{
					printf("%d - %d +%d= \n", b, b2, b3);
				}
				sum++;
			}
		}
	}
	else if (grade == 3)
	{
		int sum = 0;
		for (int i = 0; sum != count; i++)
		{
			int Dm3 = rand() % 4 + 1;
			float c = rand() % 1000 + 1;
			float c2 = rand() % 1000 + 1;
			float c3 = rand() % 1000 + 1;
			if (c * c2 - c3 >= 0 && c - (c2 * c3) >= 0)
			{
				if (Dm3 == 1)
				{
					printf("%.0f + %.0f *%.0f= \n", c, c2, c3);
				}
				else if (Dm3 == 2)
				{
					printf("%.0f - %.0f *%.0f= \n", c, c2, c3);
				}
				else if (Dm3 == 3)
				{
					printf("%.0f * %.0f -%.0f= \n", c, c2, c3);
				}
				else if (Dm3 == 4)
				{
					printf("%.0f * %.0f +%.0f= \n", c, c2, c3);
				}
				sum++;
			}
		}
	}
	else if (grade == 4 || grade == 5 || grade == 6)
	{
		int sum1 = 0;
		int sum2 = 0;
		int sum3 = 0;
		int sum4 = 0;
		char arr[] = { '0', '+','-','*','/','\0' };
		for (int i = 0; (sum1 + sum2 + sum3 + sum4) < count; i++)
		{
			int Dm4 = rand() % 4 + 1;
			int arr_bit = 1;
			int arr_bit2 = 2;
			int arr_bit3 = 3;
			int arr_bit4 = 4;
			float c = rand() % 10000 + 1;
			float c2 = rand() % 10000 + 1;
			float c3 = rand() % 10000 + 1;
			float c4 = rand() % 10000 + 1;
			if (Dm4 == 1 && sum1 <= (count / 4))
			{
				if (((c2 - (c3 * c4))) >= 0)
				{
					printf("%.0f %c %.0f %c (%.0f %c %.0f)= \n", c, arr[arr_bit], c2, arr[arr_bit2], c3, arr[arr_bit3], c4);
					sum1++;
				}
			}
			else if (Dm4 == 2 && sum2 <= (count / 4))
			{
				if ((c * c2 - c3) >= 0)
				{
					printf("(%.0f %c %.0f) %c %.0f %c %.0f= \n", c, arr[arr_bit3], c2, arr[arr_bit2], c3, arr[arr_bit], c4);
					sum2++;
				}
			}
			else if (Dm4 == 3 && sum3 <= (count / 4))
			{
				if (((c / (c2 * c3) - c4)) > 0)
				{
					printf("%.0f %c (%.0f %c %.0f) %c %.0f= \n", c, arr[arr_bit4], c2, arr[arr_bit3], c3, arr[arr_bit2], c4);
					sum3++;
				}
			}
			else if (Dm4 == 4 && sum4 <= (count / 4))
			{
				printf("%.0f %c %.0f %c (%.0f %c %.0f)= \n", c, arr[arr_bit3], c2, arr[arr_bit4], c3, arr[arr_bit], c4);
				sum4++;
			}
		}
	}
}