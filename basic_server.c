#include "pipe_networking.h"
#include <ctype.h>


int main() {

  int to_client;
  int from_client;

  from_client = server_handshake( &to_client );
  printf("pid: %d\tfrom_client: %d\tto_client: %d\n", getpid(), from_client, to_client);
  
  write(to_client,"from server",10);
  printf("5. server sent response to client\n");

  char final[10];
  read(from_client, final, 10);
  printf("7. final message from client: %s\n", final);
}