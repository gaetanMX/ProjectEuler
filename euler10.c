 
#include <stdio.h>
#include <time.h>

#define NB 2000000

int is_prime(long unsigned n){
	if (n <= 1)
	{
		return 0;
	}else if (n <= 3)
	{
		return 1;
	}else if (!(n%2) || !(n%3))
	{
		return 0;
	}

	int i = 5;

	while(i*i <= n) {
		if (!(n%i) || !(n%(i+2)))
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int main()
{

	clock_t begin, end;
	double time_spent;	
	begin = clock();

	int i = 3;
	long unsigned sum = 2;

	for (i = 3; i < NB; ++i)
	{
		if (is_prime(i))
		{
			sum+=i;
		}
	}

	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("time ! %f s\n", time_spent);
	printf("%lu\n", sum);
	return 0;

} 
