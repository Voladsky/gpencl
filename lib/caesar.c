#include "../include/gpencl.h"

void caesar_encrypt(char* text, int shift) {
	shift = ((shift % 26) + 26) % 26;
	
	for (char* ptr = text; *ptr; ++ptr) {
		*ptr = (*ptr - 'a' + shift) % 26 + 'a';
	}
}

void caesar_decrypt(char* text, int shift) {
	caesar_encrypt(text, 26 - (shift % 26));
}