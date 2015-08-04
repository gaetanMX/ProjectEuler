#include <stdio.h>

int main()
{
	int i = 1, j = 0;
	for (i; i < 1000; ++i)
	{
		if (!(i%3) || !(i%5))
		{
			j += i;
		}
	}
	printf("%d\n", j);
    return 0;
}