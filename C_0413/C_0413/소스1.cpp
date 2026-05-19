#include<stdio.h>

int main(void) {
	int i, j,count = 0;

	for (i = 2; i <= 100; ++i)
	{
		for (j = 2; j < i; ++j)
		{
			if (i % j == 0)
				break;
		}
		if (i == j) {
			count++;
			printf("%d%s", i, count % 5 ? " " : "\n");

		}
	}

	return 0;
}