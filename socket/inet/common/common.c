/**********************************************************
*     > Do Androids Dream of Electric Sheep? 
*     > File Name   :   common.c
*     > Author      :   spike
*     > Email       :   Gehirn@yeah.net
*     > Create time :   CST 22:11:57 2020/07/17 五
*     > Comment     :
**********************************************************/

#include "../head/head.h"

int server_create (int port) {/*{{{ 创建服务端 */
    
    int sockfd;
    struct sockaddr_in server;
    server.sin_family = AF_INET;
    /* server.sin_port = htons (port); */
    server.sin_port = port;
    /* server.sin_addr.s_addr = */ 
    server.sin_addr.s_addr = 0;
    print_error(sockfd = socket (AF_INET, SOCK_STREAM, 0), <, 0, socket ())
    print_error(bind (sockfd, (struct sockaddr *)&server, sizeof (server)), <, 0, bind ())
    print_error(listen (sockfd, 10), <, 0, listen ());
    
    return sockfd;
}/*}}}*/

int client_create (int port, char *ip) {/*{{{ 创建客户端 */
    
    int sockfd;
    struct sockaddr_in client;
    client.sin_family = AF_INET;
    client.sin_port = htons (port);
    client.sin_addr.s_addr = inet_addr (ip);
    
    print_error(sockfd = socket (AF_INET, SOCK_STREAM, 0), <, 0, socket ())
    print_error(connect (sockfd, (struct sockaddr *)&client, sizeof (client)), <, 0, connect ())
    return sockfd;

}/*}}}*/
