        global ft_strcmp

ft_strcmp:
        mov rax, 0
        mov rbx, 0
        mov r8, 0
        while:  
                mov BL, byte [rdi]
                mov R8B, byte [rsi]
                cmp BL, R8B
                jl inferior
                jg superior
                cmp byte [rdi], 0
                je exit
                cmp byte [rsi], 0
                je exit
                inc rdi
                inc rsi
                jmp while
        inferior:
                mov rax, -1
                jmp exit
        superior:
                mov rax, 1
                jmp exit
        exit:   
                ret