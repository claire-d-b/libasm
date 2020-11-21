        global ft_strlen

ft_strlen:
        mov rax, 0
        jmp while
        while:
                mov BL, byte [rdi + rax]
                cmp BL, 0
                je exit
                inc rax
                loop while
        exit:
                ret
