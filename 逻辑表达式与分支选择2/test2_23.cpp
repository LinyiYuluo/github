#define _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include<stdio.h>

#define MAXN 10
typedef float ElementType;


ElementType Max(ElementType arr[], int n)
{
    int i = 0;
    ElementType max = 0;
    for (i = 0; i < n; i++)
    {
       // if (arr[i] > max)  注意，如果这样子写那么当数组全为负数时输出的最大值将会是max=0
        if(arr[i]>=arr[0])
            max = arr[i];
    }
    return max;
}

int main()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &S[i]);
    printf("%.2f\n", Max(S, N));

    return 0;
}



//int main()
//{
//	int i;
//	int cost = 0;
//	char a;
//	scanf("%d %c", &i, &a);
//	while (i > 0)
//	{
//		if (i <= 1000)
//			cost = 8;
//		else
//		{
//			i = i - 1000;
//			if (i <= 500)
//				cost = 8 + 4;
//			else
//				cost = 8 + 4 + i / 500;
//			break;
//		}
//	}
//	if (a == 'y')
//	{
//		cost = cost + 5;
//		printf("%d", cost);
//	}
//	else if (a == 'n')
//		printf("%d", cost);
//	return 0;
//}

//int main()
//{
//	float x,y;
//	scanf("%f", &x);
//	while (x >= 0.0 && x < 20.0)
//	{
//		if (x >= 0.0 && x < 5.0)
//		{
//			y = (float)(-x + 2.5);
//
//		}
//		else if (x >= 5.0 && x < 10)
//		{
//			y = (float)(2.0-1.5*(x-3.0)*(x-3.0));
//		}
//		else
//			y = (float)(x / 2.0 - 1.5);
//		printf("%.3f", y);
//		break;
//	}
//	
//	return 0;
//}

//int main()
//{
//	double s;
//	scanf("%lf", &s);
//	double t1 = (s / 3.0 + 50);
//	double t2 = s / 1.2;
//	if (t1 > t2)
//		printf("Walk");
//	else if (t1 < t2)
//		printf("Bike");
//	else
//		printf("All");
//	return 0;
//}

//int main()
//{
//	int i;
//	scanf("%d", &i);
//	switch(i)
//	{
//	case 1:
//	case 3:
//	case 5:
//		printf("NO");
//		break;
//	case 2:
//	case 4:
//	case 6:
//	case 7:
//		printf("YES");
//		break;
//	default:
//		break;
//	}
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	while ((x >= 0 && x <= 100) && (y >= 0 && y <= 100))
//	{
//		if ((x < 60 && y >= 60) || (x >= 60 && y < 60))
//			printf("1");
//		else
//			printf("0");
//		break;
//	}
//	return 0;
//}
//整除3 5 7

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a = n % 3;
//	int b = n % 5;
//	int c = n % 7;
//	int d = n % 15;
//	int e = n % 21;
//	int f = n % 35;
//	if (a + b + c == 0)
//		printf("3 5 7");
//	else if (a != 0 && b != 0 && c != 0)
//		printf("n");
//	else if (d == 0 && c != 0)
//		printf("3 5");
//	else if (e == 0 && b != 0)
//		printf("3 7");
//	else if (f == 0 && a != 0)
//		printf("5 7");
//	else if (a == 0 && f != 0)
//		printf("3");
//	else if (b == 0 && e != 0)
//		printf("5");
//	else if (c == 0 && d != 0)
//		printf("7");
//	return 0;
//}