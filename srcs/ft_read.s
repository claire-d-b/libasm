        global ft_read
        extern __errno_location
        extern ft_strlen

ft_read:
        mov rax, 0
        syscall
        cmp EDI, 0
        je exit
        mov rbx, rax
        cmp rbx, 0
        jl error
        cmp rax, rdx
        jg number
        jl eof
        je number
        jmp exit
        number:
                mov rax, rdx
                jmp exit
        eof:
                mov rax, 0
                jmp exit
        error:
                call __errno_location wrt ..plt; PIE relocation In computing, position-independent code[1] (PIC[1]) or position-independent executable (PIE)[2] is a body of machine code that, being placed somewhere in the primary memory, executes properly regardless of its absolute address. PIC is commonly used for shared libraries, so that the same library code can be loaded in a location in each program address space where it does not overlap with other memory in use
                imul rbx, -1
                mov [rax], rbx
                mov rax, -1
                ret
        exit:
                ret
