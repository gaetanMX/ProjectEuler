#include <stdio.h>

#define MAX_LIMIT	4000000

int main()
{
	
	int fb(int j){
		int fb1 = 1, fb2 = 2;

		if (j <= 1)
		{
			return j;
		}

		return fb(j-1) + fb(j-2);
	}

	int k = 0, res = 0;
	int temp = fb(k);
	while(temp  < MAX_LIMIT){

		if (!(temp%2))
		{
			res += temp;
		}
		temp = fb(++k);
	}

	printf("%d\n", res);

    return 0;
}