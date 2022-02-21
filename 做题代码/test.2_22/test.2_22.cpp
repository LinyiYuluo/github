#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//大象喝水问题

int main()
{
	int h, r;
	long int V=20*1000;
	scanf("%d %d", &h, &r);
	double v = (double)(3.14159 * (double)r*(double)r * (double)h);//小桶容积
	double i = (double)V / v;//需要多少桶
	int t = (int)(V / v);
	double x = (double)t;
	if (i > x)
	{
		printf("%d", ++t);
	}
	else
		printf("%d", t);
	return 0;
}

//求两个双精度浮点数相除的余数
//#include<math.h>
//int main()
//{
//	double a, b;
//	scanf("%lf %lf", &a, &b);
//	while (a > 0 && b > 0)
//	{
//		double r = fmod(a,b);
//		printf("%g", r);
//		break;
//	}
//	return 0;
//}

//苹果和虫子

//#include<math.h>
//int main()
//{
//	int n,x,y;
//	scanf("%d%d%d", &n, &x, &y);
//	while (y <= n * x)
//	{
//		float i = (float)y / (float)x;
//		int m = n-(int)ceil(i);
//        printf("%d", m);
//		break;
//	}
//	return 0;
//}

//求线段长度

//#include<math.h>
//int main()
//{
//	double xa, ya, xb, yb;
//	scanf("%lf%lf%lf%lf", &xa, &ya, &xb, &yb);
//	while ((fabs(xa) <= 10000 )&& (fabs(xb) <= 10000) && (fabs(ya) <= 10000) & (fabs(yb) <= 10000))
//	{
//		double l = sqrt(((xa - xb) * (xa - xb)) +((ya-yb)*(ya-yb)) );
//		printf("%.3lf", l);
//		break;
//	}
//	return 0;
//}

//求等差数列

//#include<stdlib.h>
//int main()
//{
//	int a1, a2, n;
//	scanf("%d%d%d", &a1, &a2, &n);
//	while ((abs(a1) <= 100) && (abs(a2) <= 100) && (n <= 1000) && (n > -0))
//	{
//		int d = a2 - a1;
//		long int a = d * (n - 1) + a1;
//		printf("%ld", a);
//		break;
//	}
//	return 0;
//}

