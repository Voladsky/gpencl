#include <iostream>
#include <string>
#include "gpencl.hpp"

int main() {
    std::cout << "Enter a string to encrypt: ";
    std::string input;
    std::getline(std::cin, input);
    int shift;
    std::cout << "Enter shift value: ";
    std::cin >> shift;
    caesar_encrypt(&input[0], shift);
    std::cout << "Encrypted string: " << input << std::endl;
    caesar_decrypt(&input[0], shift);
    std::cout << "Decrypted string: " << input << std::endl;
    return 0;
}
