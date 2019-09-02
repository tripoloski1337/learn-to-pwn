# pwning
learn to do pwn
in this repository i will make some vulnerable binary so you can attack the binary by various technique
0x0 | Name | Level |  technique
--- | --- | --- | ---
1 | instruction pointer | easy | bof
2 | arbitrary write | easy | shellcode
3 | arbitrary write bss | easy | shellcode
4 | defeat aslr | medium | ret2libc attack
5 | defeat canary | medium | ret2libc attack
6 | jmp | easy | ROP
7 | procedure linkage table | easy | raet2plt
8 | syscall | easy | ROP
9 | _dl_runtime_resolve | easy | ret2dl-resolve
10| tcache_poisoning | medium | tcache poisoning (heap exploitation) @libc2.27