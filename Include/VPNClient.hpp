#ifndef VPN_CLIENT_H
#define VPN_CLIENT_H
#include "Tunneling.hpp"
#include "Encryption.hpp"

#include "NetworkInterface.hpp"
#include "Authentication.hpp"
#include "KeyExchange.hpp"
#include <thread>
#include <vector>
#include <string>

class VPNClient{
     private:
     string serverAddr;
     int serverPort;
     string username;
     string password;
     Encryption encryption;
     SSHKeyExchange sshKeyExchange;
     NetworkInterface networkInterface;
     Tunneling tunneling;
     Authentication authentication;

     bool isconnected;
     public :
          VPNClient(const string &serverAddr, int serverPort,
                    const string &username, const string &password);
          ~VPNClient();
          bool ConnectToVPN();
          void StartVPNSession();
          void receiveAndDecryptFromServer();
     private:
          bool performKeyExchange();
          bool authenticateWithServer();

};
#endif // VPN_CLIENT_H