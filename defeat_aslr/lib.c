#include <stdio.h>

int main()
{
    char buf[200]; // limitation
    printf("+-------------------------------------------+\n");
    printf("|            developed by tripoloski   2019 |\n");
    printf("|  how to :                                 |\n");
    printf("|           - leaking libc                  |\n");
    printf("|           - calculate to got shell        |\n");
    printf("+-------------------------------------------+\n");
    printf("buff > ");
    gets(&buf); // bug in here
    return 0;
}
