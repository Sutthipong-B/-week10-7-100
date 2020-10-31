#include<stdio.h>
int main()
{
	int i, amount = 9, num[9], sum = 0, over1, over2;
	for (i = 0; i < amount; i++)
	{
		scanf_s("%d", &num[i]);
		sum += num[i];
	}
	for (i = 0; i < amount - 1; i++)
	{
		for (int j = i + 1; j < amount; j++)
		{
			if (sum - 100 == num[i] + num[j])
			{
				over1 = num[i];
				over2 = num[j];
				break;
			}
		}
	}
	for (i = 0; i < amount; i++)
	{
		if (over1 == num[i] || over2 == num[i])
		{
			continue;
		}
		else
		{
			printf("%d\n", num[i]);
		}
	}
	return 0;
}
