// Сумма элементов, оканчивающихся пятёркой
#include <iostream>
using namespace std;

int main()
{
	int n, x,sum;
	scanf_s("%d", &n);
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &x);
		if (x%10==5)
		{
			sum += x;
		}
	}
	if (sum != 0)
	{
		printf("%d", sum);
	}
	else
	{
		printf("chisel net");
	}
}