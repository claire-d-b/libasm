ALL_C		= srcs/ft_read.s\
			srcs/ft_strcmp.s\
			srcs/ft_strcpy.s\
			srcs/ft_strdup.s\
			srcs/ft_strlen.s\
			srcs/ft_write.s

ALL_O		= srcs/ft_read.o\
			srcs/ft_strcmp.o\
			srcs/ft_strcpy.o\
			srcs/ft_strdup.o\
			srcs/ft_strlen.o\
			srcs/ft_write.o

SRC_C		= main.c libasm.c
SRC_O	= main.o libasm.o
NAME		= libasm.a
NAME_EXE	= libasm
DEBUG	= .gdb_history
CC		= gcc
RUN_EXE	= -o
RUN_SRC_ASM	= nasm -f elf64
RUN_SRC_C		= -c
INCL		= -include
HEADER		= libasm.h
LIB		= ar -rcs
INCL_LIB	= -I.
RM		= rm -f
CFLAGS		= -Wall -Wextra -Werror
OBJ_ASM	= nasm -f elf64 -g -F dwarf -o srcs/ft_read.o srcs/ft_read.s &&\
		nasm -f elf64 -g -F dwarf -o srcs/ft_strcmp.o srcs/ft_strcmp.s &&\
		nasm -f elf64 -g -F dwarf -o srcs/ft_strcpy.o srcs/ft_strcpy.s &&\
		nasm -f elf64 -g -F dwarf -o srcs/ft_strdup.o srcs/ft_strdup.s &&\
		nasm -f elf64 -g -F dwarf -o srcs/ft_strlen.o srcs/ft_strlen.s &&\
		nasm -f elf64 -g -F dwarf -o srcs/ft_write.o srcs/ft_write.s

$(NAME):	$(ALL_C)
			@$(OBJ_ASM)
			@$(LIB) $(NAME) $(ALL_O)
$(NAME_EXE):	$(SRC_C) $(ALL_C)
			@$(CC) $(RUN_SRC_C) $(CFLAGS) $(SRC_C) $(INCL) $(HEADER)
			@$(CC) $(INCL_LIB) $(NAME) $(RUN_EXE) $(NAME_EXE) $(ALL_O) $(SRC_O)
all:	$(NAME)
exe:	$(NAME) $(NAME_EXE)
clean:
		@$(RM) $(ALL_O) $(SRC_O)
fclean:		clean
		@$(RM) $(NAME) $(NAME_EXE) $(DEBUG)
re:			fclean all
.PHONY:		all clean fclean re exe