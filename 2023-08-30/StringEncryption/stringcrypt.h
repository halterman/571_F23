//  File stringcrypt.h

#include <string>

class StringEncrypter {
public:
   // Set the key to use for the encrypt and decrypt calls
   void set_key(const std::string& key);

   // Encrypt a string based in the current key
   std::string encrypt(const std::string& str) const;

   // Decrypt a string based in the current key;
   // Calling decrypt on a string returned from encrypt
   // will return the original string for the same key
   // (i.e., decrypt(encrypt(s)) == s for the same key)
   std::string decrypt(const std::string& str) const;
};

