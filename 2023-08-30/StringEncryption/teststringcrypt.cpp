#include <string>
#include <iostream>
#include "stringcrypt.h"

int main() {
    StringEncrypter crypter;
    crypter.set_key("3geR23@7&-");
    std::string word = "Move 8am";
    std::string secret = crypter.encrypt(word);
    std::cout << "Original: " 
              << word 
              << "  Encrypted: " 
              << secret 
              << "  Decrypted: " 
              << crypter.decrypt(secret) 
              << '\n';
}

