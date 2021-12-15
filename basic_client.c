#include "pipe_networking.h"


int main() {

    int to_server;
    int from_server;

    from_server = client_handshake( &to_server );
    printf("pid: %d\tfrom_client: %d\tto_server: %d\n", getpid(), from_server, to_server);
    
    char sc[10];
    read(from_server, sc, 10);
    printf("6. client got from server: %s\n", sc);

    char input[10];
    printf("Enter input: ");
    fgets(input, 10, stdin);
    write(to_server, input, 10);
    printf("2. client sends name of SP to server\n");

}