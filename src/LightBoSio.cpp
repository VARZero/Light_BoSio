#include "./bosio/L-BoSio_SYS.h"
#include "./bosio/L-BoSio_Protocal.h"

void LBoSio_API_Process(char LB_Macro[4], std::string DATAs){

}

void LBoSio_Network(){
    char recvbuffer[2048], sendbuffer[2048];
    struct sockaddr_in serverADDR, clientADDR;
    int serverSock, clientSock;
    int clientAddrSz;
    ssize_t recvBytes, sentBytes;

    socklen_t clientAddrLen = 0;

    memset(&serverADDR, 0, sizeof(serverADDR));
    memset(&clientADDR, 0, sizeof(clientADDR));

    serverADDR.sin_family = AF_INET;
    serverADDR.sin_addr.s_addr = htonl(INADDR_ANY);
    serverADDR.sin_port = htonl(27927);

    if ((serverSock = ::socket(AF_INET, SOCK_DGRAM, 0)) == -1){
        printf("Server Error : Can't Open Socket\n"); exit(0);
    }

    if (::bind(serverSock, (struct sockaddr*)&serverADDR, sizeof(serverADDR)) < 0){
        printf("Server Error : Bind Error\n"); exit(0);
    }

    while(1){
        
    }
}