#include <stdio.h>
#include <math.h>
#include <time.h>

#define max(a,b) \
({ __typeof__ (a) _a = (a); \
   __typeof__ (b) _b = (b); \
 _a > _b ? _a : _b; })

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

	unsigned long number = 600851475143;
	unsigned long prime_factor = sqrtl(600851475143);
	unsigned long res = 1;

	//printf("%lu\n", prime_factor);

	for (prime_factor; prime_factor > 0; prime_factor--)
	{
		if (number % prime_factor == 0)
		{
			if (is_prime(prime_factor))
			{
				if (number / prime_factor >= prime_factor)
				{
					if (is_prime(number / prime_factor))
					{
						res = max(res , number / prime_factor);
					}
				}

				res = max(prime_factor , res);			
			}
			
		}
	}

	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("time ! %f s\n", time_spent);

	printf("%lu\n", res);
	return res;	

}