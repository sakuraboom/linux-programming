/**********************************************************
*     > Do Androids Dream of Electric Sheep? 
*     > File Name   :   head.h
*     > Author      :   spike
*     > Email       :   Gehirn@yeah.net
*     > Create time :   CST 15:13:19 2020/07/14 二
*     > Comment     :   Linux程序设计常用头文件
**********************************************************/

#ifndef _HAED_H
#define _HAED_H

/* 定义print_error宏 {{{*/
#define print_error(a, comp, b, c) { \
    if ((a) comp (b)) { \
        perror (#c); \
        exit (1); \
    }   \
}/*}}}*/


#include <arpa/inet.h>
#include <ctype.h>
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/file.h>
#include <signal.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdarg.h>
#include <pthread.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <string.h>
#include <sys/epoll.h>
#include "../common/common.h"
#endif
