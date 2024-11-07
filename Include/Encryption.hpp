#ifndef ENCRYPTION_HPP
#define ENCRYPTION_HPP

#include <string>

class Encryption{
     public:
     Encryption();
     string encryptData(const string& data);
     string decryptData(const string& data);

     private:
     //generate a random key
     string key;
     string xorEncryptDecrypt(const string& data, const string& key);
     
};
#endif
