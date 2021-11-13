#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <fcntl.h>

#include "colours.h"
#include "beep.h"

#define BUF_SIZE 1024

int main(int argc, char *argv[])
{
    atexit(endbeeper);
    char *ip = "127.0.0.1";
    int port = 8888;

    struct sockaddr_in server_addr, addr;
    char buf[BUF_SIZE];

    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        printf(RED "Error:" RESET " Socket file descriptor returned an error\n");
        sleep(1);
        exit(1);
    }

    printf(GREEN "Info:" RESET " Socket file descriptor connected successfully\n");

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = port;
    server_addr.sin_addr.s_addr = inet_addr(ip);


    int e = bind(sockfd, (struct sockaddr *) &server_addr, sizeof(server_addr));
    if (e < 0) {
        printf(RED "Error:" RESET " Bind returned an error\n");
        sleep(1);
        exit(1);
    }

    printf(GREEN "Info:" RESET " Bind connected successfully\n");

    e = listen(sockfd, 10);
    // TODO: ...

    return 0;
}
