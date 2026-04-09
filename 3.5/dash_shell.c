// dash_shell.c
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    char *argv[2];
    argv[0] = "/bin/sh";
    argv[1] = NULL;
    
    // setuid(0);  // Line 11 - COMMENTED OUT initiall
    execve("/bin/sh", argv, NULL);
    
    return 0;
}