#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Input 3 intergers : ");
	scanf_s("%d %d %d", &a, &b,&c);
	int x = 2;
	int i = 1;
	while (x <= a)
	{
		if (a % x == 0)
		{
			if (b % x == 0)
			{
				if (c % x == 0)
				{
					c = c / x;
					i = i * x;
				}
				b = b / x;
			}
			a = a / x;
		}
		else {
			x++;
		}
	 }
	printf("Greatest common divisor = %d", i);

	

	return 0;
}