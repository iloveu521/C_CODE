#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*����һ���ֶκ���*/
int Picewise(double x)
{
	double result;
	scanf("%lf", &x);//ʵ����ʱӦ���ⲿ���룬��ͬ
	if (x >= 0)
	{
		result = pow(x,0.5);
	}
	else
	{
		result = pow(x + 1, 2) + 2 * x + 1 / x;
	}
	printf("f(%.2f) = %.2f", x, result);
	return 0;
}

/*ʱ��ת��*/

void TimeFormat_Turn(int hour,int mintue)
{
	scanf("%02d:%02d", &hour, &mintue);
	if (hour >= 0 && hour < 12)
	{
		printf("%02d:%02d AM", hour, mintue);
	}
	else if (hour == 12)
	{
		if (mintue == 0)
		{

			printf("%02d:%02d AM", 12, 00);
		}
		else
		{
			printf("%02d:%02d PM", hour, mintue);
		}
	}
	else if (hour < 24)
	{
		printf("%02d:%02d PM", hour - 12, mintue);
	}
	else
	{
		printf("%02d:%02d AM", 00, mintue);
	}
}


/*�����÷ֵȼ�*/
void ScoreLevel(int score)
{
	scanf("%d", &score);
	if (score >= 90)
	{
		printf("A");
	}
	else if (score >= 80)
	{
		printf("B");
	}
	 else if (score >= 70)
	{
		printf("C");
	}
	else if (score >= 60)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}
}

/*���һ����λ����7�ĸ���*/
int _7Quantity(int n)
{
	int count = 0;
	scanf("%d", &n);
	for(int i = 0;i < 4;i++)
	{
		int temp = n % 10;
		if (temp == 7)
		{
			count++;
		}
		n /= 10;
	}
	return count ;
}

/*�ж������Ƿ񽡿�*/
void ishealth(double height, double weight)
{
	scanf("%lf %lf", &weight, &height);
	double BMI = weight / pow(height, 2);
	if (BMI < 18.5)
	{
		printf("ƫ��\n");
	}
	else if (BMI < 24)
	{
		printf("����\n");
	}
	else if (BMI < 28)
	{
		printf("ƫ��\n");

	}
	else if (BMI < 40)
	{
		printf("����\n");
	}
	else
	{
		printf("���ضȷ���\n");
	}
}

/*�����������ɹ��*/
void FishingOrDrying(int N)
{
	int temp = 0;
	scanf("%d", &N);
	temp = N % 5;
	if (N > 5)
	{
		if (temp > 0 && temp < 4)
		{
			printf("Fishing in day %d\n", N);
		}
		else
		{
			printf("Drying in day %d\n", N);
		}
	}
	else
	{
		if (N <= 3)
		{
			printf("Fishing in day %d\n", N);
		}
		else
		{
			printf("Drying in day %d\n", N);
		}
	}
}

/*�Ƿ���ƽ����*/
void isSquare()
{
	int T;
	scanf("%d", &T);
	double temp = pow(T, 0.5);
	if ((temp - (int)temp) == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}

