#include <stdio.h>
#include <time.h>

#define NTH_PRIME	10001


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

	int i = 0;
	unsigned long res = 1;

	while(i < NTH_PRIME){
		res++;
		if (is_prime(res))
		{
			i++;
		}		
	}



	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("time ! %f s\n", time_spent);

	printf("%lu\n", res);
	return res;	

} 
