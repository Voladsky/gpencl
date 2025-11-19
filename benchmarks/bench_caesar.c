#include <stdio.h>
#include <time.h>

#include "../include/gpencl.h"

#define NUM_ITER 10000000

void bench_string_encryption() {
	char text[50] = "the five boxing wizards jump quickly";
	clock_t start, end;
	
	start = clock();
	for (int i = 0; i < NUM_ITER; ++i) {
		caesar_encrypt(text, 42);
		caesar_decrypt(text, 42);
	}
	end = clock();
	double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("String encryption, %d iterations: %.3f sec\n", 
           NUM_ITER, cpu_time_used);
}

int main() {
	printf("Benchmarking Caesar cipher on CPU:\n");
	
	bench_string_encryption();
	
	return 0;
}

