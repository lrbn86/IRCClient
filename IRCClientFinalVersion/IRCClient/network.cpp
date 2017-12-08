#include "network.h"

int open_client_socket(char *host, int port) {
        // Initialize socket address structure
        struct sockaddr_in socketAddress;
        // Clear sockaddr structure
        memset((char*)&socketAddress, 0, sizeof(socketAddress));
        // Set family to Internet
        socketAddress.sin_family = AF_INET;
        // Set port
        socketAddress.sin_port = htons((u_short)port);
        // Get host table entry for this host
        struct hostent *ptrh = gethostbyname(host);
        if (ptrh == NULL) {
                perror("gethostbyname");
                exit(1);
        }
        // Copy the host ip address to socket address structure
        memcpy(&socketAddress.sin_addr, ptrh->h_addr, ptrh->h_length);
        // Get TCP transport protocol entry
        struct protoent *ptrp = getprotobyname("tcp");
        if (ptrp == NULL) {
                perror("getprotobyname");
                exit(1);
        }
        // Create a tcp socket
        int sock = socket(PF_INET, SOCK_STREAM, ptrp->p_proto);
        if (sock < 0) {
                perror("socket");
                exit(1);
        }
        // Connect the socket to the specified server
        if (connect(sock, (struct sockaddr*)&socketAddress, sizeof(socketAddress)) < 0) {
                perror("connect");
                exit(1);
        }
        return sock;
}

// Use this function for each button click or any other actions.
int sendCommand(char *host, int port, char *command, char *response) {
        int sock = open_client_socket(host, port);
        if (sock < 0) {
                return 0;
        }
        // Send command
        write(sock, command, strlen(command));
        write(sock, "\r\n", 2);
        // Print copy to stdout
        write(1, command, strlen(command));
        write(1, "\r\n", 2);
        // Keep reading until connect is closed or MAX_RESPONSE
        int n = 0;
        int len = 0;
        while ((n = read(sock, response + len, MAX_RESPONSE - len)) > 0) {
                len += n;
        }
        response[len] = 0;
        close(sock);
        return 1;
}
