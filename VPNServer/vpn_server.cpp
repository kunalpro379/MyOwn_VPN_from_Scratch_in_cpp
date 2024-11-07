#include "VPNServer.h"
#include <iostream>
#include <thread>
#include <vector>
#include <cstring> // for memset
#include <sys/socket.h> // socket functions
#include <netinet/in.h> // sockaddr_in
#include <unistd.h> // close()

VPNServer::VPNServer():serverPort(port), isRunning(false){}
VPNServer::~VPNServer(){

}
void VPNServer::startServer(){
}

void VPNServer::handleClientConnection(int clientSocket){

}
bool VPNServer::performKeyExchange(int clientSocket){
}
bool VPNServer::authenticateClient(int clientSocket){
}
