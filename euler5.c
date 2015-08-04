#include <stdio.h>
#include <time.h>

int main()
{

	clock_t begin, end;
	double time_spent;

	begin = clock();
	
	int start = 2520;
	int go = 1, i = 3;

	LOOP:while(go){
		start +=2;
		i = 3;
		for (i; i <= 20; ++i){
			if (start%i != 0){
				goto LOOP;
			}
		}

		end = clock();
		time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
		printf("time ! %f s\n", time_spent);

		printf("%d\n", start);
		go = 0;
	}

	return 0;
}