#ifndef NETWORKINTERFACE_HPP
#define NETWORKINTERFACE_HPP

#include <string>

class NetworkInterface{
     public:  
     NetworkInterface();
     ~NetworkInterface();
     //establish conn to the vpn server
//CLIENT SIDE
     bool connectToServer();
     //Disconn from vpn server
     void disconnectFromServer();
     //read data from the virtual network interface

     void writeToInterface();
     //write data to the virtual network interface
     //read data from the server
     string readFromServer();

     //write data to the server
     void writeToServer();

//SERVER SIDE
     //read data from a client 
     string readFromCLient();

     //wrote data tp client 
     void writeToClient();

private: 
int server_socket;
int client_socket;
bool isConnected;


};
#endif;
