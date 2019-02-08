#include <stdio.h>

int main()
{
  char buf[20]; // limitation
  printf("+-------------------------------------------+\n");
  printf("|            developed by tripoloski   2019 |\n");
  printf("|  how to :                                 |\n");
  printf("| - write on a memory                       |\n");
  printf("| - Execute the code that you wrote earlier |\n");
  printf("+-------------------------------------------+\n");
  printf("[+] stack address : %p \n" , &buf);
  printf("local exploit > ");gets(&buf);
}
