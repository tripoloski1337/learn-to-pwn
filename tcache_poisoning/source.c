#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define SZ_BLOCK 200
#define SZ_HEAP  10
#define SZ_FLAG 100

char a[100];
u_int *(buf);

void win(){
	char buf[SZ_FLAG];
	FILE *f = fopen("flag.txt","r");
	if (f == NULL){
		puts("[!] error code 901");
		exit(0);
	}
	fgets(buf,SZ_FLAG,f);
	puts(buf);
}

void welcome(){
puts("     __                      __                           _                      _              ");
puts("    / /_ _____ ____ _ _____ / /_   ___     ____   ____   (_)_____ ____   ____   (_)____   ____ _");
puts("   / __// ___// __ `// ___// __ \\ / _ \\   / __ \\ / __ \\ / // ___// __ \\ / __ \\ / // __ \\ / __ `/");
puts("  / /_ / /__ / /_/ // /__ / / / //  __/  / /_/ // /_/ // /(__  )/ /_/ // / / // // / / // /_/ / ");
puts("  \\__/ \\___/ \\__,_/ \\___//_/ /_/ \\___/  / .___/ \\____//_//____/ \\____//_/ /_//_//_/ /_/ \\__, /  ");
puts("       HackerClass Gunadarma @2019     /_/        author: arsalan (tripoloski)         /____/   ");
}

void menu(){
	puts("+---------------------+");
	puts("|         Menu        |");
	puts("+---------------------+");
	puts("| 1. allocate memory  |");
	puts("| 2. freeing memory   |");
	puts("| 3. exit             |");
	puts("+---------------------+");
	printf("| select [1-3] : ");
}

void init(){
	setvbuf(stdout, 0 , 2 , 0);
	setvbuf(stdin, 0 , 2 , 0);
}

void create_memory(){
	int size;
	printf("[?] size : ");
	//read(0,size , sizeof(size));
	scanf("%d" , &size);
	printf("[?] data : ");
	if (size <= 0x88){
		buf = malloc(size);
		read(0,buf , size);
	}
	puts("[+] memory allocated!");
}

void release_memory(){
	free(buf);
}

void main(){
	init();
	char buf[4];
	welcome();
	while(1){
		menu();
		read(0 , buf , sizeof(buf));
		switch(atoi(buf)){
			case 1:
				create_memory();
				break;
			case 2:
				release_memory();
				break;
			case 3:
				puts("[+] exiting...");
				exit(0);
				break;
			default:
				puts("[!] invalid choice error code 1902");
				break;
		}
	}
}
