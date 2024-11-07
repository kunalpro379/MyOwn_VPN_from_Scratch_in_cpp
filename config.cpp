#include "Include/Config.hpp"

std::string Config::getDefaultServerAddress() {
    return "127.0.0.1"; // Default server address (localhost)
}

int Config::getDefaultServerPort() {
    return 8080; // Default server port
}

std::string Config::getEncryptionAlgorithm() {
    return "AES-256"; // Example encryption algorithm
}

int Config::getMaxClientConnections() {
    return 10; // Maximum number of client connections allowed
}
