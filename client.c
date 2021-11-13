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
  char* server_ip = "" /*TODO*/;
  return 0;
}