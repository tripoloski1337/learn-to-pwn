#include <stdio.h>
int main()
{
  char buf[256];
  printf("+-------------------------------------------+\n");
  printf("|              by tripoloski   2019         |\n");
  printf("|  how to :                                 |\n");
  printf("| - ROP to other function                   |\n");
  printf("|                                           |\n");
  printf("+-------------------------------------------+\n");
  printf("local exploit > "); gets(&buf);
}

void shell(unsigned int arg_check1 , unsigned int arg_check2)
{
  if( arg_check1 == 0xd34db44d )
  {
    if( arg_check2 == 0x12069900 )
    {
      system("/bin/sh");
    }else{
      printf("error 3290 \n");
    }
  }else{
    printf("error 3291 ? \n");
  }
}
