#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i;
	scanf("%d", &i);
	if ((i % 3 == 0) && (i % 5 == 0))
		printf("YES");
	else
		printf("NO");
	return 0;
}

//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	if (x >= 10 || y >= 20)
//		printf("1");
//	else
//		printf("0");
//	return 0;
//}

//int main()
//{
//	int i;
//	scanf("%d", &i);
//	while (i > 0 && i <= 1000)
//	{
//		if (i >= 10 && i < 100)
//			printf("1");
//		else
//			printf("0");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int x,y;
//	scanf("%d%d", &x, &y);
//	while (x >= 0)
//	{
//		if (x > y)
//			printf(">");
//		else if (x == y)
//			printf("=");
//		else
//			printf("<");
//		break;
//	}
//	
//	return 0;
//}

//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	int b = (int)a;
//	if (b % 2 == 1)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}


//int main()
//{
//	unsigned int n;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//		printf("even");
//	else
//		printf("odd");
//	return 0;
//}



//int main()
//{
//	float n;
//	scanf("%f", &n);
//	if (n >= 0.0)
//		printf("%.2f", n);
//	else
//		printf("%.2f", -n);
//	return 0;
//}



//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n > 0)
//		printf("positive");
//	else if (n == 0)
//		printf("zero");
//	else
//		printf("negative");
//	return 0;
//}