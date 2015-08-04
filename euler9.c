 
#include <stdio.h>
#include <time.h>

#define NB 1000

int main()
{

	clock_t begin, end;
	double time_spent;	
	begin = clock();

	int a = 0, b = 0, c = 0;

	for (a = 1; a < NB; ++a)
	{
		for (b = 1; b < NB; ++b)
		{
			c = NB - a - b;
			if (c > 0 && ( a*a+b*b == c*c))
			{
				end = clock();
				time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
				printf("time ! %f s\n", time_spent);
				printf("a,b and c = %d,%d and %d\nproduct abc = %d\n", a, b, c, a*b*c);
				return 0;
			}
		}
	}	

	return 0;	

} 
