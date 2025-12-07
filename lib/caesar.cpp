#include "../include/gpencl.hpp"
#include "vulkan-init.hpp"
#include <stdint.h>
#include <stdlib.h>

void caesar_encrypt(char* text, int shift) {
	shift = ((shift % 26) + 26) % 26;
    VulkanContext context;
    initVulkan(&context);
	for (char* ptr = text; *ptr; ++ptr) {
		*ptr = (*ptr - 'a' + shift) % 26 + 'a';
	}
}

void caesar_decrypt(char* text, int shift) {
	caesar_encrypt(text, 26 - (shift % 26));
}

void caesar_encrypt_bytes(uint8_t* data, size_t size, int shift) {
    shift = ((shift % 256) + 256) % 256;

    for (size_t i = 0; i < size; ++i) {
        data[i] = (data[i] + shift) % 256;
    }
}

void caesar_decrypt_bytes(uint8_t* data, size_t size, int shift) {
    shift = ((shift % 256) + 256) % 256;

    for (size_t i = 0; i < size; ++i) {
        data[i] = (data[i] - shift) % 256;
    }
}
