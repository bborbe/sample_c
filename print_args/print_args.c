#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    printf("arg count: %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("arg %d has value %s and length %lu\n", i, argv[i], strlen(argv[i]));
    }
    return 0;
}
