global  main
section .text
main:
        mov     rax, 4
        mov     rbx, 1
        mov     rcx, message
        mov     rdx, 17
        int	0x80

        mov     rax, 1
        xor     rbx, rbx
        int	0x80
message:
        db      "Hello, Holberton", 10
