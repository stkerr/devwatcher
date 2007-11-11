/* client.h */

#ifndef __CLIENT_H
#define __CLIENT_H

#include <neuro/NEURO.h>
#include <neuro/nnet/network.h>

#include "global.h"

extern void Client_SendPacket(CONNECT_DATA *client, char *data, u32 len);

extern void Client_Poll();
extern int Client_Init(char *username, char *host, int port);

extern void Client_Clean();

#endif /* NOT __CLIENT_H */