#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#include "colours.h"
#include "beep.h"

#define BUF_SIZE 1024

int main(int argc, char *argv[])
{
    atexit(endbeeper);
    char *ip = "127.0.0.1";
    int port = 8888;
    //int e;

    //int sockfd, sock;
    struct sockaddr_in server_addr, addr;
    char buf[BUF_SIZE];

    //int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    int sockfd = -1;

    if (sockfd < 0) {
        beep;
        printf(RED "Error:" RESET " socket error\n");
        sleep(1);
        exit(1);
    }

    return 0;
}
