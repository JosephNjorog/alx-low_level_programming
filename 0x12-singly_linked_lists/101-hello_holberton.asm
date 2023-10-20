section .data
    hello db "Hello, Holberton", 0Ah, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [hello]
    xor eax, eax
    call printf

    mov rsp, rbp
    pop rbp
    ret

