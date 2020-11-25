        global ft_strcpy
        extern ft_strlen

ft_strcpy:
        mov rbx, rdi
        mov rdi, rsi
        call ft_strlen
        mov rcx, rax
        mov rdi, rbx
        mov rbx, 0
        mov rax, 0
        while:
                cmp byte [rsi + rax], 0
                je exit
                mov BL, byte [rsi + rax]
                mov byte [rdi + rax], BL
                inc rax
                loop while
        exit:
                mov byte [rdi + rax], byte 0
                push rdi
                pop rax
                ret