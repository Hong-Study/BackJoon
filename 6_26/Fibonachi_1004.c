#include <stdio.h>
#include <stdlib.h>

int memo[40] = {1,1};

int fibonacci(int n){
	if ( n <= 1) return memo[n];
	else {
		if(memo[n] > 0) return memo[n];
	}
	return memo[n] = fibonacci(n-1) + fibonacci(n-2);
}

int main ()
{
	int count;
	scanf("%d",&count);

	for(int i = 0 ; i < count ;i++){
		int num;
		scanf("%d", &num);

		if (num == 0) printf("1 0\n");
		else if(num == 1) printf("0 1\n");
		else{
			fibonacci(num);
			printf("%d %d\n",memo[num-2],memo[num-1]);
		}
	}

	return 0;
}