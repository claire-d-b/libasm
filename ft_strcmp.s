        global ft_strcmp

ft_strcmp:
        mov rax, 0
        mov rcx, 0
        cmp byte [rdi], 0
        je rax_neg
        cmp byte [rsi], 0
        je rax_pos
        jmp while
        while:
                cmp DIL, SIL
                jl inferior
                jg superior
                je equal
        inferior:
                mov rax, -1
                cmp byte [rdi + rcx], 0
                je exit
                cmp byte [rsi + rcx], 0
                je exit
                inc rcx
                jmp while
        superior:
                mov rax, 1
                cmp byte [rdi + rcx], 0
                je exit
                cmp byte [rsi + rcx], 0
                je exit
                inc rcx
                jmp while
        equal:
                cmp rax, 0
                je diff_size
                jne equal_loop
        diff_size:
                mov rax, 0
                jmp equal_loop
        equal_loop:
                cmp byte [rdi + rcx], 0
                je exit
                cmp byte [rsi + rcx], 0
                je exit
                inc rcx
                jmp while
        rax_neg:
                mov rax, -1
                jmp exit
        rax_pos:
                mov rax, 1
                jmp exit
        exit:
                ret
