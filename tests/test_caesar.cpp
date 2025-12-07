#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "gpencl.hpp"


void test_basic_encryption() {
	char text[] = "hello";
	char orig[] = "hello";

	caesar_encrypt(text, 3);
	assert(strcmp(text, "khoor") == 0);

	caesar_decrypt(text, 3);
	assert(strcmp(text, orig) == 0);
}

int main() {
	printf("Running Caesar encryption tests:\n");
	test_basic_encryption();
	printf("+ Basic tests passed\n");

	printf("+++ All tests passed\n");
	return 0;
}
