#include <stdio.h>
#include <time.h>

int main()
{
	clock_t begin, end;
	double time_spent;

	begin = clock();

	double i = 1, j = 0, k = 0;
	for (i; i <= 100; ++i)
	{
		j += i*i;
		k += i;
	}

	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("time ! %f s\n", time_spent);

	printf("%lf\n", k*k - j);
    return 0;
}