/**********************************************************
*     > Do Androids Dream of Electric Sheep? 
*     > File Name   :   server.c
*     > Author      :   spike
*     > Email       :   Gehirn@yeah.net
*     > Create time :   CST 22:17:22 2020/07/17 五
*     > Comment     :
**********************************************************/

#include "../head/head.h"

int main (int argc, char **argv) {
    
    if (argc != 2) {
        fprintf (stderr, "Error in [%s] : port\n", __FILE__);
        exit (1);
    }
    
    int server_listen = server_create (atoi (argv[1]));
    int sockfd;
    if ((sockfd = accept (server_listen, NULL, NULL)) < 0 ) {
        perror ("accept ()");
        exit (1);
    }

    close (sockfd);
    close (server_listen);
    return 0;
}
