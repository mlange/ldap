#include <moca.h>

#include <stdio.h>
#include <stdlib.h>

#include <mocaerr.h>
#include <mocagendef.h>
#include <oslib.h>

#define HOST "wiadc1"
#define PORT 389

int main(int argc, char *argv[])
{
    int status;

    SOCKET_FD fd;

    printf("Connecting to %s:%d...\n", HOST, PORT);

    status = osTCPConnect(&fd, HOST, PORT);
    if (status != eOK)
    {
        printf("ERROR: Could not connect to %s:%d\n", HOST, PORT);
        printf("%s\n", osError( ));
        exit(1);
    }

    printf("Successfully connected to %s:%d\n", HOST, PORT);

    exit(0);
}
