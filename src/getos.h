#ifndef GET_OS_H
#define GET_OS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <linux/unistd.h>       /* for _syscallX macros/related stuff */
#include <linux/kernel.h>       /* for struct sysinfo */
#include <sys/sysinfo.h>
#include "./utils/ascii.c"
char *get_path();
char *get_user();
long uptime();
#endif

