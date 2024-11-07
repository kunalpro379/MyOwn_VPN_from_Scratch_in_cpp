#include "../Include/vpn_client.hpp"
#include <iostream>
using namespace std;
//constructor
VPNClient::VPNClient(const string& serverAddr, int serverPort, 
          const string& username, const string &password){
this->serverAddr=serverAddr;
this->serverPort=serverPort;
this->username=username;
this->password=password;
}
//destructor
VPNClient::~VPNClient(){
     //cleanup the resources
}

bool VPNClient:: connectToVPN(){
     cout<<"Connecting to VPN server at "<<serverAddr<<":"<<serverPort<<"\n\n\n";
     //Establish sockt conn with server
     if(){}
     //perform key exchange 
     return true;
}
void VPNClient:: startVPNSession(){}
void VPNClient:: receiveAndDecryptFromServer(){}
bool VPNClient:: performKeyExchange(){}
bool VPNClient:: authenticateClient(){}
