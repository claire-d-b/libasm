        global ft_strlen

ft_strlen:
        mov rax, 0
        jmp while
        while:
                cmp byte [rdi + rax], 0
                je exit
                mov BL, byte [rdi + rax]
                inc rax
                jmp while
        exit:
                ret
