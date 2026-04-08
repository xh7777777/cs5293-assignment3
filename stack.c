/* stack.c */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef BUFSIZE
#define BUFSIZE 33
#endif

int bof(char *str)
{
    char buffer[BUFSIZE];
    /* 这里有缓冲区溢出漏洞 */
    strcpy(buffer, str);
    return 1;
}

int main(int argc, char **argv)
{
    char str[517];
    FILE *badfile;

    char dummy[BUFSIZE]; memset(dummy, 0, BUFSIZE);

    badfile = fopen("badfile", "r");
    fread(str, sizeof(char), 517, badfile);
    bof(str);

    printf("Returned Properly\n");
    return 1;
}