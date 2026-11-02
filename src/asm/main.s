    .section .rdata
message:
    .asciz "Hello to 304 from Anastas Galchev, number 7, group M3O-104BV-26!"

    .section .text
    .globl main
    .extern printf

main:
    subq $40, %rsp
    leaq message(%rip), %rcx
    call printf
    addq $40, %rsp
    xorl %eax, %eax
    ret