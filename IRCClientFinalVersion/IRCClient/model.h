#ifndef MODEL_H
#define MODEL_H
#include "network.h"
#include <iostream>
extern char model_response[MAX_RESPONSE];
extern char *model_hostname;
extern int model_port;
// Used for sendCommands
extern std::string model_username;
extern std::string model_password;
extern std::string model_roomName;
#endif // MODEL_H
