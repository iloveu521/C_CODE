#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*计算一个分段函数*/
int Picewise(double x)
{
	double result;
	scanf("%lf", &x);//实际用时应从外部输入，下同
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

/*时制转换*/

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


/*评定得分等级*/
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

/*检测一个四位数里7的个数*/
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

/*判断体重是否健康*/
void ishealth(double height, double weight)
{
	scanf("%lf %lf", &weight, &height);
	double BMI = weight / pow(height, 2);
	if (BMI < 18.5)
	{
		printf("偏瘦\n");
	}
	else if (BMI < 24)
	{
		printf("正常\n");
	}
	else if (BMI < 28)
	{
		printf("偏胖\n");

	}
	else if (BMI < 40)
	{
		printf("肥胖\n");
	}
	else
	{
		printf("极重度肥胖\n");
	}
}

/*三天打鱼两天晒网*/
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

/*是否是平方数*/
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

