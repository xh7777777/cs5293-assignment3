#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* val = getenv("LD_PRELOAD");
    if (val)
        printf("LD_PRELOAD = %s\n", val);
    else
        printf("LD_PRELOAD is NOT set\n");
    return 0;
}