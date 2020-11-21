        global ft_strcpy
        extern ft_strlen

ft_strcpy:
        mov rax, 0
        mov rcx, 0
        mov rbx, rdi
        mov rdi, rsi
        call ft_strlen
        mov r8, rax
        mov rdi, rbx
        mov rax, 0
        jmp while
        while:
                cmp rcx, r8
                jg segf
                cmp byte [rsi + rcx], 0
                je copy
                mov DIL, byte [rdi + rcx]
                cmp DIL, 0
                je copy
                inc rcx
                loop while
        copy:
                push rsi
                pop rdi
                jmp exit
        segf:
                mov [rax], rdi
                ret
        exit:
                push rdi
                pop rax
                ret