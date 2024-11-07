#ifndef VPN_SERVER_H
#define VPN_SERVER_H
#include "Tunneling.hpp"
#include "Encryption.hpp"
#include "Utils.hpp"
#include "Config.hpp"
#include "NetworkInterface.hpp"
#include "Authentication.hpp"
#include "KeyExchange.hpp"
#include <thread>
#include <vector>
#include <string>

using namespace std;

class VPNServer {
     private:
          int server_port;
          bool isRunning;
          vector<thread> clientThreads;
          Encryption encryption;
          SSHKeyExchange sshKeyExchange;
          NetworkInterface networkInterface;
          Tunneling tunneling;
          Authentication authentication;
     public:
          VPNServer(int port);
          ~VPNServer();
          void StartServer();
          void HandleClientConnection(int clientSocket);

};
#endif // VPN_SERVER_H