#define _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
#include<stdio.h>



//char* my_sort(int* p0, int sz,char*pstr1,char*pstr2)
//{
//	int sum = 0;
//	int sum0 = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		sum0 += i + 1;
//		if (abs(p0[i]) >= 1 && abs(p0[i]) <= sz && (sum += abs(p0[i])) == sum0)
//			return pstr2;
//		else
//			return pstr1;
//	}
//}
//
//int main()
//{
//	int n;
//	char pstr[] = "Not jolly";
//	char* pstr1 = pstr;
//	char ppstr[] = "Jolly";
//	char* pstr2 = ppstr;
//	int* p = (int*)calloc(3000,4);
//	int* p0 = (int*)calloc(3000,4);
//	if (p == NULL||p0==NULL)
//		printf("%s", strerror(errno));
//	scanf("%d", &n);
//	int i = 0;
//	if (p != NULL && p0 != NULL)
//	{
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &p[i]);
//			if (i)
//				p0[i - 1] = p[i] - p[i - 1];
//		}
//		char* s = my_sort(p0, n-2,pstr1,pstr2);
//		printf("%s", s);
//	}
//	free(p);
//	free(p0);
//	p = NULL;
//	p0 = NULL;
//	return 0;
//}

//int main()
//{
//	int L;
//	int m;
//	scanf("%d%d", &L,&m);
//	if (L >= 1 && L <= 10000 && m >= 1 && m <= 100)
//	{
//		int i ,j,n;
//		int a, b;
//		//int p[10005] = { 0 };
//		int* p = (int*)calloc(10000, 4);
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d%d", &a,&b);
//			int mx = a > b ? a : b;
//			int mi = a < b ? a : b;
//			if (L >= mx&&mi>=0)
//			{	
//				for (i = 0; i <= L; i++)
//				{
//					if (i >= mi && i <= mx)
//					{
//						p[i] += 1;
//					}
//				}
//			}	
//		}
//		int count = 0;
//		for (n = 0; n <= L; n++)
//		{
//			if (p[n] >= 1)
//				count++;
//		}
//		free(p);
//		p = NULL;
//		int dif = L+1 - count;
//		printf("%d", dif);
//	}
//
//	return 0;
//}


//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[111];
//	int i = 0;
//	int count1 = 0;
//	int count2 = 0;
//	int count3 = 0;
//	int count4 = 0;
//	while (n > 0 && n <= 100)
//	{
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", arr+i);
//				if (arr[i] >= 0 && arr[i] <= 18)
//					count1++;
//				else if (arr[i] >= 19 && arr[i] <= 35)
//					count2++;
//				else if (arr[i] >= 36 && arr[i] <= 60)
//					count3++;
//				else if (arr[i] >= 61)
//					count4++;
//		}
//		break;
//	}
//	int sum = count1 + count2 + count3 + count4;
//	float quo1 = (float)count1 / (float)sum;
//	float quo2 = (float)count2 / (float)sum;
//	float quo3 = (float)count3 / (float)sum;
//	float quo4 = (float)count4 / (float)sum;
//	printf("%.2f%%\n%.2f%%\n%.2f%%\n%.2f%%\n", 100.0 * quo1, 100.0 * quo2, 100.0 * quo3, 100.0 * quo4);
//	return 0;
//}


//逆序数组元素

//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[99] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	reverse(arr, n) ;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	float arr[10] = { 28.9,32.7,45.6,78.0,35.0,86.2,27.8,43.0,56.0,65.0 };
//	int i = 0;
//	int m;
//	float sum = 0;
//	for (i = 0; i <10; i++)
//	{
//		scanf("%d", &m);
//		while (m >= 0 && m <= 100)
//		{
//			sum += ((float)m * arr[i]);
//			break;
//		}	
//	}
//	printf("%.1f", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int high;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	scanf("%d", &high);
//	int count = 0;
//		for (i = 0; i < 10; i++)
//		{
//			while (arr[i] >= 100 && arr[i] <= 200 && high >= 100 && high <= 120)
//			{
//				{
//					do
//					{
//						if (arr[i] <= high)
//						{
//							count++;
//						}
//						else if (arr[i] > high)
//						{
//							int High = high + 30;
//							if (arr[i] <=High)
//								count++;
//						}
//					} while (i == 10);
//				}break;
//			}
//		}
//	printf("%d", count);
//	return 0;
//}



//int main()
//{
//	int n=0;
//	int m = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	while (n >= 0 && n <= 100)
//	{
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", arr+i);
//		}
//		scanf("%d", &m);
//		int count = 0;
//		for (i = 0; i < n; i++)
//		{
//			if (m == arr[i])
//				count++;
//		}
//		printf("%d", count);
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int n, m,i;
//	int max = 0;
//	int min = 1000;
//	scanf("%d", &n);
//	while (n >= 1 && n <= 1000)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			scanf("%d", &m);
//			while (m >= 0 && m <= 1000)
//			{
//				max = m > max ? m : max;
//				min = m < min ? m : min;
//				break;
//			}
//		}
//		printf("%d", max - min);
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n, i, score;
//	scanf("%d", &n);
//	int max = 0;
//	while (n >= 1 && n < 100)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			scanf("%d", &score);
//			while (score >= 0 && score <= 100)
//			{
//				max = score >= max ? score : max;
//				break;
//			}
//		}
//		printf("%d", max);
//		break;
//	}
//	return 0;
//}


//代码存在问题未解决

//int main()
//{
//	int n,i,m;
//	scanf("%d", &n);
//	long long int sum = 0;
//	float adv;
//	while (n >= 1 && n <= 10000)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			scanf("%d", &m);
//			while (abs(m) <= 10000)
//			{
//				sum += m;
//				break;
//			}
//		}
//		printf("%lld %.5f", sum, adv = (float)sum / (float)n);
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	float p;
//	scanf("%d", &n);
//	int i = 0;
//	float sum = 0;
//	while (n >= 0 && n <= 100)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			scanf("%f", &p);
//			while (fabs(p) <= 1000.0)
//			{
//				sum += p;
//				break;
//			}
//		}
//		float adv = sum / (float)n;
//		printf("%.4f", adv);
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	float balance;
//	float sum = 0;
//	float adv = 0;
//	int i = 0;
//	for (i = 1; i <= 12; i++)
//	{
//		scanf("%f", &balance);
//		if (balance > 0 && balance <= 1000000)
//			sum += balance;
//	}
//	adv = sum / (int)12;
//	printf("$%.2f", adv);
//	return 0;
//}

//int main()
//{
//	int n, age;
//	scanf("%d", &n);
//	while (n >= 0 && n <= 100)
//	{
//		int i = 0;
//		int sum = 0;
//		for (i = 1; i <= n; i++)
//		{
//			scanf("%d", &age);
//			if (age >= 15 && age <= 25)
//			{
//				sum += age;
//			}
//		}
//		float adv = (float)sum / (float)n;
//		printf("%.2f", adv);
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int n, x, y,m;
//	scanf("%d%d%d", &n, &x, &y);
//	while (y <= n * x&&n>0&&x>0&&y>=0)
//	{
//		int i = y % x;
//		if (i)
//			m = n - (y / x) -1;
//		else
//			m = n - (y / x);
//		printf("%d", m);
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	double a ;
//	double b ;
//	double c ;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	while (a)
//	{
//		double x1 = (-b + (double)sqrt(b * b - 4.0 * a * c)) / (2.0 * a);
//		double x2 = (-b - (double)sqrt(b * b - 4.0 * a * c)) / (2.0 * a);
//		
//		if (4.0 * a * c - b * b == 0)
//		{
//			printf("x1=x2=%.5lf", x1);
//		}
//		else if (4.0 * a * c - b * b < 0)
//		{
//			if (x1 < x2)
//			{
//				double max = x2;
//				x2 = x1;
//				x1 = max;
//			}
//			printf("x1=%.5lf;x2=%.5lf", x1, x2);
//		}
//			
//		else if (4.0 * a * c - b * b > 0)
//		{
//			double a1 = (-b / (double)(2.0 * a))  ;
//			double a2 = ((double)sqrt(4.0 * a * c - b * b) / (double)(2.0 * a));
//			double a3= (-b / (2.0 * a))  ;
//			double a4 = ((double)sqrt(4.0 * a * c - b * b) / (double)(2.0 * a));
//			double tmp;
//			if (a2 < a4)
//			{
//				tmp = a2;
//				a2 = a4;
//				a4 = tmp;
//				if (a4 < 0)
//				{
//					a4 = -a4;
//				}
//			}
//			if (!a1)
//				a1 = 0.0;
//			if (!a3)
//				a3 = 0.0;
//			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", a1, a2, a3, a4);
//		}
//		break;
//	}
//	return 0;
//}