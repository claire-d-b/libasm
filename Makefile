FT_READ		= srcs/ft_read.s
FT_STRCMP	= srcs/ft_strcmp.s
FT_STRCPY	= srcs/ft_strcpy.s
FT_STRDUP	= srcs/ft_strdup.s
FT_STRLEN	= srcs/ft_strlen.s
FT_WRITE	= srcs/ft_write.s
ALL_O		= srcs/ft_read.o\
			srcs/ft_strcmp.o\
			srcs/ft_strcpy.o\
			srcs/ft_strdup.o\
			srcs/ft_strlen.o\
			srcs/ft_write.o

SRC_C		= main.c
SRC_O	= main.o
NAME		= libasm.a
NAME_EXE	= libasm
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
OBJ_ASM	= nasm -f elf64 srcs/ft_read.s &&\
		nasm -f elf64 srcs/ft_strcmp.s &&\
		nasm -f elf64 srcs/ft_strcpy.s &&\
		nasm -f elf64 srcs/ft_strdup.s &&\
		nasm -f elf64 srcs/ft_strlen.s &&\
		nasm -f elf64 srcs/ft_write.s

$(NAME):
			@$(OBJ_ASM)
			@$(LIB) $(NAME) $(ALL_O)
$(NAME_EXE):	$(OBJ)
			@$(CC) $(RUN_SRC_C) $(CFLAGS) $(SRC_C) $(INCL) $(HEADER)
			@$(CC) $(INCL_LIB) $(NAME) $(RUN_EXE) $(NAME_EXE) $(ALL_O) $(SRC_O)
all:	$(NAME)
exe:	$(NAME) $(NAME_EXE)
clean:
		@$(RM) $(ALL_O) $(SRC_O)
fclean:		clean
		@$(RM) $(NAME) $(NAME_EXE)
re:			fclean all
.PHONY:		all clean fclean re exe