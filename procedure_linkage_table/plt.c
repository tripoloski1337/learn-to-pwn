#include <stdio.h>
void main()
{
  char buf[512];
  printf("+-------------------------------------------+\n");
  printf("|    exploit developed by tripoloski   2019 |\n");
  printf("|  how to :                                 |\n");
  printf("| - take advantage of what already exists   |\n");
  printf("|                                           |\n");
  printf("+-------------------------------------------+\n");
  printf("local exploit > "); gets(&buf);
}

void kan()
{
  system("cal 2019");
}

void bin()
{
  a = "/bin/sh";
}
