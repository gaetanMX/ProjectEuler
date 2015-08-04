#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_palindrome(int n){
		char s[7];
		sprintf(s, "%d", n);

		int i = 0;

		while(n)
		{
		    //printf("right digit %d ", n % 10);

		    int tmp = s[i] - '0';

		    //printf("left digit %d\n", tmp);

		    if ((n % 10) != (tmp))
		    {
		    	return 0;
		    }

		    i++;
		    n /= 10;
		}


		return 1;
}


int main()
{

	clock_t begin, end;
	double time_spent;

	begin = clock();

	int k = 999, l = 999;

	int max = 0; int tmp;

	while(l > 100){

		tmp = k*l;


		if(is_palindrome(tmp)) {
			if (tmp > max)
			{
				max = tmp;				
			}		

		}

		if(k == 100){
			l--; 
			k = l;
		}else {
			k--;
		}
	}

	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("time ! %f s\n", time_spent);


	printf("max : %d\n",max);	
	
	return 0;
}