section .data
    hello db 'Hello, Holberton', 0x0A  ; Null-terminated string to print
    format db '%s', 0x0               ; Format string for printf with a newline, null-terminated

section .text
    global main
    extern printf

main:
    ; Set up the stack frame
    push rbp
    mov rbp, rsp

    ; Pass the address of the format string to printf
    lea rdi, [format]
    lea rsi, [hello]

    ; Call printf with the format and argument
    call printf

    ; Clean up the stack frame and return from main
    pop rbp
    xor eax, eax
    ret

