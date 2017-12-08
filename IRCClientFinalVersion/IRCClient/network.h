#ifndef NETWORK_H
#define NETWORK_H
#include <time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#define MAX_RESPONSE (10 * 1024)
int open_client_socket(char *host, int port);
// Use this function for each button click or any other actions.
int sendCommand(char *host, int port, char *command, char *response);
#endif // NETWORK_H
