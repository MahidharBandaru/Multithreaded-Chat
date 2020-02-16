#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <netdb.h>
#include <sys/select.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <pthread.h>

#define MAX_BUFFER 1024
#define MAX_CHATBOXES 10
typedef struct {
    char *buffer[MAX_BUFFER];
    int head, tail;
    int full, empty;
} queue;

typedef struct {
    int socketFd;
    int clientSockets[MAX_BUFFER];
    char* clientNames[MAX_BUFFER];
    int numClients;
    queue *queue;
} chatDataVars;

typedef struct {
    chatDataVars chatBox[MAX_CHATBOXES];
    char *chatBoxName[MAX_CHATBOXES];
} chatData;

int main () {
    
    return 0;
}