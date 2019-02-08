#include<stdio.h>
int main()
{
  char buf[130];
  printf("+-------------------------------------------+\n");
  printf("|    exploit developed by tripoloski   2019 |\n");
  printf("|  how to :                                 |\n");
  printf("| - overwrite the instruction pointer       |\n");
  printf("|                                           |\n");
  printf("+-------------------------------------------+\n");
  printf("local exploit > "); gets(&buf);
}

void shell()
{
  system("/bin/sh");
}
