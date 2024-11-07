#ifndef CONFIG_H
#define CONFIG_H

#include <string>

class Config {
public:
    static std::string getDefaultServerAddress();
    static int getDefaultServerPort();
    static std::string getEncryptionAlgorithm();
    static int getMaxClientConnections();
};

#endif // CONFIG_H
