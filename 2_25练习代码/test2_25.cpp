#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int x, y,sum,dif,pro,quo;
	char a = 0;
	scanf("%d%d%c", &x, &y,&a);
	char c=getchar();
		switch (c)
		{
		case '+':
			sum = x + y;
			printf("%d", sum);
			break;
		case '-':
			dif = x - y;
			printf("%d", dif);
			break;
		case'*':
			pro = x * y;
			printf("%d", pro);
			break;
		case'/':
			if (y == 0)
				printf("Divided by zero!");
			else
			{
				quo = x / y;
				printf("%d", quo);
			}
			break;
		default:
			printf("Invalid operator!");
			break;
		}
	return 0;
}

//int main()
//{
//	int arr[4][2] = { {1,-1},{1,1}, {-1,1},{-1,-1} };
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	if (x >=(-1) && x<=1 && y>=(-1) && y<=1)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	while (a > 0 && a < 3000)
//	{
//		if (a % 4 == 0 && a % 100 != 0)
//			printf("Y");
//		else if (a % 400 == 0)
//			printf("Y");
//		else
//			printf("N");
//		break;
//
//	}
//	return 0;
//}


//int get_max(const int* x,const int* y)
//{
//	int max = *x >* y ? *x : *y;
//	return max;
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	
//	while (a > 0 && b > 0 && c > 0)
//	{
//		
//		int d = get_max(&a, &b);
//		d=get_max(&d, &c);
//		if ((a + b > d) &&( a + c > d) &&( b + c > d))
//			printf("yes");
//		else
//			printf("no");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	char a = 'C';
//	char b = 'h';
//	char c = 'i';
//	char d = 'n';
//	char e = 'a';
//	printf("%c%c%c%c%c", a + 4,b+4,c+4,d+4,e+4);
//	return 0;
//}



//int main()
//{
//    int a, b;
//    while (~scanf("%d%d", &a, &b))
//    {
//        printf("%d\n", a + b);
//    }
//    return 0;
//}