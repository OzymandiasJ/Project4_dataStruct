#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
//num=12345
int main(void)
{
	int num, a[20] = {0}, i, j, t, k;
	scanf("%d",&t);
	for (i = 0; i < t; i++)
	{
		scanf("%d",&num);
		j = 0;
		while (num != 0)
		{
			a[j++] = num%10;
			//a[0]=5,
			num = (int)num / 10;
			//num=1234
		}
		printf("%d,",j);
		for (k = j - 1; k >= 0; k--)printf("%d,",a[k]);
		
		for (k = 0; k < j; k++)
		{
			printf("%d", a[k]);
			if (k <j-1)printf(",");
			if (k == j-1)printf("\n");
		}
	}

	return 0;
}