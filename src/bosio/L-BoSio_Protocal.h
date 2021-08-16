#include <iostream>
#include <string.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

#include "bosio/L-BoSio_SYS.h"

void LBoSio_Network(){
    char recvbuffer[2048], sendbuffer[2048];
    struct sockaddr_in serverADDR, clientADDR;
    int serverSock; 
}