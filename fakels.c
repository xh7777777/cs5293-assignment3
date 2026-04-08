#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("This is my malicious ls!\n");
    printf("Real UID: %d\n", getuid());
    printf("Effective UID: %d\n", geteuid());
    return 0;
}