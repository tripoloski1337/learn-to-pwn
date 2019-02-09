/**
       syscall() is a small library function that invokes the system call
       whose assembly language interface has the specified number with the
       specified arguments.  Employing syscall() is useful, for example,
       when invoking a system call that has no wrapper function in the C
       library.

       syscall() saves CPU registers before making the system call, restores
       the registers upon return from the system call, and stores any error
       code returned by the system call in errno(3) if an error occurs.

       Symbolic constants for system call numbers can be found in the header
       file <sys/syscall.h>.
       ----------------------------------------------------------------------
   Architecture calling conventions
       Every architecture has its own way of invoking and passing arguments
       to the kernel.  The details for various architectures are listed in
       the two tables below.

       The first table lists the instruction used to transition to kernel
       mode (which might not be the fastest or best way to transition to the
       kernel, so you might have to refer to vdso(7)), the register used to
       indicate the system call number, the register used to return the sys‐
       tem call result, and the register used to signal an error.

       arch/ABI    instruction           syscall #  retval  error    Notes
       ────────────────────────────────────────────────────────────────────
       alpha       callsys               v0         a0      a3       [1]
       arc         trap0                 r8         r0      -
       arm/OABI    swi NR                -          a1      -        [2]
       arm/EABI    swi 0x0               r7         r0      -
       arm64       svc #0                x8         x0      -
       blackfin    excpt 0x0             P0         R0      -
       i386        int $0x80             eax        eax     -
       ia64        break 0x100000        r15        r8      r10      [1]
       m68k        trap #0               d0         d0      -
       microblaze  brki r14,8            r12        r3      -
       mips        syscall               v0         v0      a3       [1]
       nios2       trap                  r2         r2      r7
       parisc      ble 0x100(%sr2, %r0)  r20        r28     -
       powerpc     sc                    r0         r3      r0       [1]
       riscv       scall                 a7         a0      -
       s390        svc 0                 r1         r2      -        [3]
       s390x       svc 0                 r1         r2      -        [3]
       superh      trap #0x17            r3         r0      -        [4]
       sparc/32    t 0x10                g1         o0      psr/csr  [1]
       sparc/64    t 0x6d                g1         o0      psr/csr  [1]
       tile        swint1                R10        R00     R01      [1]
       x86-64      syscall               rax        rax     -        [5]
       x32         syscall               rax        rax     -        [5]
       xtensa      syscall               a2         a2      -


**/
#include <stdio.h>
#include <sys/syscall.h>
/** https://github.com/torvalds/linux/blob/master/lib/syscall.c **/
void main()
{

  char buf[512];
  printf("+-------------------------------------------+\n");
  printf("|    exploit developed by tripoloski   2019 |\n");
  printf("|  how to :                                 |\n");
  printf("| - syscall                                 |\n");
  printf("| - https://syscalls.kernelgrok.com/        |\n");
  printf("+-------------------------------------------+\n");
  printf("local exploit > "); gets(&buf);
}
