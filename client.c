#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#include "colours.h"
#include "beep.h"

#define BUF_SIZE 1024

int main(int argc, char** argv)
{
  atexit(endbeeper);
  char *ip = "127.0.0.1";
  int port = 8888;
  struct sockaddr_in server_addr;

  return 0;
}