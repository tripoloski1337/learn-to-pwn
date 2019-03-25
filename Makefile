#CC = gcc
#CFLAGS = -Wall -mpreferred-stack-boundary=2 -m32 -fno-stack-protector
#folder = array('arbitrary_write',arbitrary_write)
main:
	gcc -fno-stack-protector -z execstack -o arbitrary_write/arbitrary_write arbitrary_write/arbitrary_wx.c -m32 -mpreferred-stack-boundary=2 -no-pie
	gcc -fno-stack-protector -z execstack -o arbitrary_write_bss/bss arbitrary_write_bss/arbitrary_rwx_bss.c -m32 -mpreferred-stack-boundary=2 -no-pie
	gcc defeat_aslr/lib.c -o defeat_aslr/lib -m32 -mpreferred-stack-boundary=2 -no-pie -fno-stack-protector
	gcc defeat_canary/canary.c -o defeat_canary/canary -m32 -mpreferred-stack-boundary=2 -no-pie -fno-stack-protector
	gcc jmp/jmp.c -o jmp/jmp -m32 -mpreferred-stack-boundary=2 -no-pie -fno-stack-protector
	gcc overwrite_instruction_pointer/ip.c -o overwrite_instruction_pointer/ip -m32 -mpreferred-stack-boundary=2 -no-pie -fno-stack-protector
	gcc procedure_linkage_table/plt.c -o procedure_linkage_table/plt -m32 -mpreferred-stack-boundary=2 -no-pie -fno-stack-protector
	gcc syscall/syscall.c -o syscall/syscall -m32 -mpreferred-stack-boundary=2 -no-pie -fno-stack-protector -fno-builtin -static
clean:
	rm -rfv arbitrary_write/arbitrary_write
	rm -rfv arbitrary_write_bss/bss
	rm -rfv defeat_aslr/lib
	rm -rfv defeat_canary/canary
	rm -rfv jmp/jmp
	rm -rfv overwrite_instruction_pointer/ip
	rm -rfv procedure_linkage_table/plt
	rm -rfv syscall/syscall
