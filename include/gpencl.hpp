#ifndef GPENCL_H
#define GPENCL_H
#include <stdint.h>

void caesar_encrypt(char* text, int shift);
void caesar_decrypt(char* text, int shift);

void caesar_encrypt_bytes(uint8_t* data, size_t size, int shift);
void caesar_decrypt_bytes(uint8_t* data, size_t size, int shift);

#endif // GPENCL_H
