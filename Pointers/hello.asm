section .data
    msg db 'Hello, world!', 0xA  
    len equ $ - msg              

section .text
    global _start                

_start:
    mov rax, 1                   
    mov rdi, 1                   
    mov rsi, msg                 
    mov rdx, len                
    syscall                      

    ; Exit the program
    mov rax, 60               
    xor rdi, rdi              
    syscall                     
    