#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/time.h>
int main() {
	clock_t t;
	clock_t t1;
	t = clock();
	malloc(100000000);
	t = clock() - t;
	double time_taken1 = ((double)t) / CLOCKS_PER_SEC;
	printf("malloc took %f\n", time_taken1);

	t1 = clock();
	malloc(12);
	t1 = clock() - t1;
	double time_taken2 = ((double)t1) / CLOCKS_PER_SEC;
	printf("malloc2 took %f\n", time_taken2);
}

