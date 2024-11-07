#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include <string>

class Authentication {
public:
    bool authenticateClient(const std::string& username, const std::string& password);
    bool authenticateClient(int clientSocket);
};

#endif // AUTHENTICATION_H
